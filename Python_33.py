def sort_third(l: list):
    l_copy = l[:]
    l_divisible_by_three = [val for idx, val in enumerate(l_copy) if idx % 3 == 0]
    l_divisible_by_three.sort()
    for idx, val in enumerate(l_copy):
        if idx % 3 == 0:
            l_copy[idx] = l_divisible_by_three.pop(0)
    return l_copy