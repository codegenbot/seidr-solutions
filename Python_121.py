def sum_odd(lst):
    return sum(i for i in lst if isinstance(i, int) and i % 2 != 0)


solution = sum_odd([1, 2, 3, 4, 5])
print(solution)