def sort_third(input_list):
    result = []
    current_group = []
    for num in sorted(map(int, input_list)):
        current_group.append(num)
        if len(current_group) == 3:
            result.append(tuple(sorted(current_group)))
            current_group = []

    if current_group:
        result.append(tuple(sorted(current_group)))

    return tuple(result)