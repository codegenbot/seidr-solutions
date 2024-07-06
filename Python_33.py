def sort_third(input_list):
    result = [sorted(input_list[i : i + 3]) for i in range(0, len(input_list), 3)]
    remaining = input_list[len(input_list) // 3 * 3:]
    if remaining:  
        if len(result) > 0:
            result[-1].extend(sorted(remaining))
        else:
            result.append(sorted(remaining))
    return tuple(result)