def encode_cyclic(s: str):
    encoded = ''
    i = 0
    while i < len(s):
        if i + 3 <= len(s):
            group = s[i:i+3]
        else:
            group = s[i:]
        encoded += group[1] + (group[0] if len(group) == 3 else '')
        i += 1
    return encoded