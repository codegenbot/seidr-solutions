def sort_third(l: list):
    result = []
    for i in range(len(l)):
        if i % 3 == 0:
            result.append(sorted([x for x in l[i:] if i % 3 == 0]))
        else:
            result.append(l[i])
    return [x for sub_l in result for x in sub_l]