Here is the completed code:

def decode_cyclic(s: str):
    groups = []
    temp_group = ""
    for char in s:
        if len(temp_group) < 3:
            temp_group += char
        else:
            if len(temp_group) == 3:
                groups.append(temp_group)
            temp_group = char
    if len(temp_group) == 3:
        groups.append(temp_group)
    groups = [(groups[i][1:] + groups[i][0]) for i in range(len(groups))]
    return "".join([group[2] if len(group) == 3 else group[1] + group[0] for group in groups])