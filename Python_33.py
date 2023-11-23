def sort_third(l: list):
    result = []
    for i in range(0, len(l), 3):
        sublist = l[i:i+3]
        sorted_sublist = sorted(sublist)
        result.extend(sorted_sublist)
    return result