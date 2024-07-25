def decode_cyclic(s: str):
    if len(s) % 3 != 0:
        return s
    result = ""
    i = 0
    while i < len(s):
        group = s[i:i+min(len(s)-i, 3)]
        if not (group[0].isalpha() and group[-1].isdigit()):
            break
        try:
            decoded_char = chr(int(f"{group[0]}{group[1]}{(int(group[-1]) - int('0' + group[-1])) % 3}", 3)  
            result += decoded_char
        except ValueError:
            break
        i += len(group)
    return result