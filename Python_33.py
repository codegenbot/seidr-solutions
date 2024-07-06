def sort_third(input_list):
    first_part = [sorted(list(map(int, input_list[i:i+3]))) for i in range(0, len(input_list), 3)]
    remaining = list(map(int, input_list[len(input_list) // 3 * 3:]))
    if remaining:
        first_part.append(sorted([x for x in remaining]))
    return tuple(map(tuple, first_part))