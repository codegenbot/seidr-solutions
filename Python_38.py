Here is the completed code:

def decode_cyclic(s: str):
    result = ""
    group = ""
    for char in s:
        if len(group) < 3:
            group += char
        else:
            result += group[1] + group[0]
            group = char
    if group:
        result += group[1] + group[0]
    return result