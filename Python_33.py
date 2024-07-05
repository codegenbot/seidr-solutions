def sort_third(lst):
    result = []
    while lst:
        if lst[0] % 3 != 0:
            result.append(lst.pop(0))
        else:
            break
    for num in sorted([n for n in lst if n % 3 != 0]):
        result.append(num)
    return tuple(result)