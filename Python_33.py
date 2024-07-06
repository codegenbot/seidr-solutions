def sort_third(l: list):
    result = []
    for i in range(len(l)):
        if i % 3 != 0:
            result.append(l[i])
        elif result and not isinstance(result[-1], list):
            result.append(sorted([x for x in l if i % 3 == 0]))
    return [item for sublist in result for item in sublist]