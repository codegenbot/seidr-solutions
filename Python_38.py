Here is the completed code:

def decode_cyclic(s: str):
    groups = []
    temp_group = ''
    for char in s:
        if len(temp_group) < 3:
            temp_group += char
        else:
            groups.append(temp_group)
            temp_group = char
    if temp_group:
        groups.append(temp_group + (temp_group[0] * (3 - len(temp_group))))
    return "".join(groups).replace(temp_group[0], '')