def sort_even(l):
    result = []
    for i in range(min(len(l), len(l))):
        if l[i] % 2 == 0:
            result.append(sorted([x for x in l if x % 2 == 0])[::-1][i])
        else:
            result.append(l[i])
    return result