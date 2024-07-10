Here is the completed code:

def decode_cyclic(s: str):
    decoded_groups = []
    temp_group = ''
    for char in s:
        temp_group += char
        if len(temp_group) == 3:
            decoded_groups.append(temp_group[1:] + temp_group[0])
            temp_group = ''
    if temp_group:
        decoded_groups.append(temp_group)
    return "".join(decoded_groups)