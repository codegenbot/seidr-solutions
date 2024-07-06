def sort_third(input_list):
    result = []
    current_group = []
    for num in input_list:
        current_group.append(int(num))
        if len(current_group) == 3:
            result.append(tuple(sorted(current_group)))
            current_group = []

    if current_group:  
        if len(current_group) == 2:
            result.append((current_group[0], current_group[1]))
        elif len(current_group) == 1:
            result.append((current_group[0],))
        else:
            result.append(tuple(sorted(current_group)))

    return tuple(sorted(result))