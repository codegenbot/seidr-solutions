```
def decode_cyclic(s):
    result = ""
    if s[0] in ["<", ">"]:
        i = 1
        while len(result) < len(s):
            j = (i + 1) % len(s)
            temp = ""
            inside_angles = 0
            while j < len(s) and (s[j] != "<" or inside_angles > 0):
                if s[j] == "<":
                    inside_angles += 1
                elif s[j] == ">":
                    inside_angles -= 1
                    if inside_angles == 0:
                        break
                temp += s[j]
                j = (j + 1) % len(s)
            if temp:
                result += temp + " "
            i = j
    return result.strip()