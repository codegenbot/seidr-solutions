def sort_third(input_list):
    result = [sorted(input_list[i:i+3]) for i in range(0, len(input_list), 3)]
    remaining = input_list[len(input_list) // 3 * 3:]
    if remaining:
        result.append(sorted([int(x) for x in remaining]))
    return tuple(map(tuple, result))