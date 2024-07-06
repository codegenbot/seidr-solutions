```
def decode_cyclic(s):
    result = ""
    if s[0] in ["<", ">"]:
        i = 1
        while len(result) < len(s):
            j = (i + 1) % len(s)
            temp = ""
            cyclic = False
            while j < len(s) and (s[j] != "<" or temp == ""):
                if s[j] == ">":
                    cyclic = True
                    break
                temp += s[j]
                j = (j + 1) % len(s)
            if temp:
                result += temp + " "
            i = j
        if not cyclic and s[0] in ["<", ">"]:
            return result.strip().replace(">", "")
    else:
        for char in s:
            if char != "<" and char != ">":
                result += char
    return result```