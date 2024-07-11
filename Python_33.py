def sort_third(lst: list):
    result = []
    for i, x in enumerate(lst):
        if (i - lst.index(x)) % 3 == 0:
            result.append(min([y for y in lst if (lst.index(y) - i) % 3 != 0]))
        else:
            result.append(sorted([y for y in lst if (lst.index(y) - i) % 3 != 0])[0])
    return result