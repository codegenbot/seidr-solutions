```
def sort_third(l: list):
    not_divisible_by_3 = sorted([x for x in l if x % 3 != 0])
    result = []
    not_divisible_index = 0
    for i, x in enumerate(l):
        if x % 3 == 0:
            result.append(not_divisible_by_3[not_divisible_index])
            not_divisible_index += 1
        else:
            result.append(x)
    return result