def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if i + 2 <= len(s): 
            group = s[i : i + 2]
        else:
            group = s[i:]
        result += group[1] + (group[0] if group != s[i:] else "")
        i = (i + 2) % len(s)
    return result