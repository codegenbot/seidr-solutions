def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if i + 2 <= len(s):  
            group = s[i:i+3]
        else:
            group = s[i:]
        if len(group) >= 3: 
            result += group[1] + group[0] + group[2]
        elif len(group) == 2: # handle single character inputs
            result += group[0]
        else: # handle single characters separately
            result += group[0]
        i += 3
    return result