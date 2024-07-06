```
def sort_third(input_list):
    result = []
    for i in range(0, len(input_list), 3):
        if i + 2 < len(input_list):
            current_group = tuple(sorted([int(x) for x in input_list[i:i+3]]))
        else:
            current_group = tuple(sorted([int(x) for x in input_list[i:]]))
        result.append(current_group)

    return tuple(sorted(result))