def sum_of_odd(lst):
    result = 0
    for i in lst:
        if isinstance(i, int) and i % 2 != 0:
            result += i
    return result