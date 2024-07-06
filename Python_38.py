def decode_cyclic(s):
    if s[0] in ["<", ">"]:
        i = 1
        temp = ""
        while len(temp) < len(s):
            j = (i + 1) % len(s)
            cyclic = False
            while j < len(s) and (s[j] != "<" or temp == ""):
                if s[j] == ">":
                    cyclic = True
                    break
                temp += s[j]
                j = (j + 1) % len(s)
            if not cyclic:
                result = temp
            else:
                while len(result) < len(s):
                    if temp[0] != "<":
                        result += temp[0]
                    temp = temp[1:]
            i = j
        return result
    else:
        for char in s:
            if char != "<" and char != ">":
                yield char