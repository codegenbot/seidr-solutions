Here is the completed code:

def decode_cyclic(s: str):
    result = []
    group = ''
    for char in s:
        if len(group) == 3:
            result.append(group)
            group = ''
        group += char
    result.append(group)
    groups = [(group[2] + group[1] + group[0]) if len(group) > 0 else '' for group in result]
    return "".join(groups)