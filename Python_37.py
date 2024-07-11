```Python
def sort_even(l: list):
    even = sorted([x for x in l if x % 2 == 0])
    result = []
    odd_count = 0
    for x in l:
        if x % 2 == 0:
            result.append(even.pop(0))
        else:
            result.append(x)
            odd_count += 1

    while even:
        result.insert(odd_count, even.pop(0))
        odd_count += 2

    return result