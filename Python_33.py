def sort_third(input_list):
    result = []
    for i in range(0, len(input_list), 3):
        current_group = tuple(sorted([int(x) for x in input_list[i:i+3]]))
        if len(current_group) < 3:
            result.append(tuple(sorted([int(x) for x in current_group])))
        else:
            result.append(current_group)

    return tuple(sorted(map(tuple, result)))