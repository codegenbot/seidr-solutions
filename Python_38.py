def decode_cyclic(s: str):
    if len(s) % 3 != 0:
        return s
    result = ""
    i = 0
    while i < len(s):
        group = s[i:i+min(len(s)-i, 3)]
        if i + 2 >= len(s) or not group[-1].isdigit():
            break
        result += chr(int(f"{group[0]}{group[1]}{int('0' + group[-1]) - int(group[-1])}"), 3)  
        i += len(group)
    return result