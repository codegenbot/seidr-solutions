def sort_third(input_list):
    result = [sorted([int(x) for x in input_list[i:i+3]], key=sum) for i in range(0, len(input_list), 3)]
    remaining = input_list[len(input_list) // 3 * 3:]
    if remaining:
        result.append(sorted(map(int, remaining), key=sum))
    return tuple(map(tuple, result))