Here is the completed code:

def decode_cyclic(s: str):
    result = []
    group_index = 0
    for char in s:
        if group_index % 3 == 0:
            result.append(char)
        else:
            if group_index % 3 == 2:
                group_index = -1
            else:
                group_index += 1
    return "".join(result)