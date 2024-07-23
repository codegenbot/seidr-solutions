def decode_cyclic(s: str):
    if len(s) == 0:
        return "No input provided"
    result = ""
    i = 0
    while i < len(s):
        group = s[i:i+3] if i+2 <= len(s) else s[i:]
        if len(group) == 3:
            result += group[1] + group[0]
        elif len(group) > 0:
            if len(group) == 1: 
                if i+2 < len(s):
                    result += group + s[i+2:]
                else:
                    result += group
            else: 
                result += group
        i += 3
    return result