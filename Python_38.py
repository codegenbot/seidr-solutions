Here is the completed code:

def decode_cyclic(s: str):
    result = ''
    group = ''
    for char in s:
        group += char
        if len(group) == 3:
            result += group[1] + (group[0] if len(result) % 3 != 0 else '')
            group = ''
    if group:
        result += group[1] + (group[0] if len(result) % 3 != 0 else '')
    return result