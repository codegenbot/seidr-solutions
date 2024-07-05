def decode_cyclic(s):
    result = ""
    if s[0] == "<" or s[-1] == ">":
        i = 1
        if s[0] == "<": 
            while len(result) < len(s)-1:
                j = (i + 1) % len(s)
                temp = ""
                while j < len(s) and s[j] != "<":
                    if s[j] == ">":
                        break
                    temp += s[j]
                    j = (j + 1) % len(s)
                if temp:
                    result += temp + " "
                i = j
        else: 
            start = -2
            while len(result) < len(s)-1:
                end = (start + 1) % len(s)
                temp = ""
                while end < len(s) and s[end] != ">":
                    if s[end] == "<":
                        break
                    temp += s[end]
                    end = (end + 1) % len(s)
                if temp:
                    result += temp + " "
                start = end
    return result.strip()