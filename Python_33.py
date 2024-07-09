def sort_third(l: list):
    sorted_list = sorted(l)
    result = [sorted_list[i:i+3] for i in range(0, len(sorted_list), 3)]
    if len(result[-1]) < 3:
        result[-2].extend(result[-1])
        result.pop()
    return [elem for group in result for elem in group]