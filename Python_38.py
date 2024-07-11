def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if i + 1 <= len(s):  
            group = s[i : i + 1]
            result += group
        else:
            if i + 2 <= len(s):
                group = s[i - 1:i + 1]  
            else:  
                return s
            if len(group) == 2:
                result += group[1] + group[0]
            else:
                result += group
        i += 1
    return result