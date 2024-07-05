```
def decode_cyclic(s):
    result = ""
    if s[0] in ["<", ">"]:
        start = 1
        end = len(s) - 1
        cyclic_result = ""
        while len(result) < len(s):
            i = start
            temp = ""
            cyclic = False
            while True:
                if i == end:
                    i = (i + 1) % len(s)
                elif s[i] == ">":
                    cyclic = True
                    break
                else:
                    temp += s[i]
                    i = (i + 1) % len(s)
            if temp:
                result += temp + " "
            start = end + 1
            end = len(s) - 1
            if cyclic and s[0] in ["<", ">"]:
                while cyclic_result == "":
                    j = start
                    temp = ""
                    while True:
                        if i == end:
                            i = (i + 1) % len(s)
                        elif s[i] == ">":
                            break
                        else:
                            temp += s[i]
                            i = (i + 1) % len(s)
                    if temp:
                        cyclic_result = temp
                result += cyclic_result.replace(">", "")
                return result.strip()
    else:
        for char in s:
            if char != "<" and char != ">":
                result += char
    return result