def sum_squares(lst):
    return sum([n ** 2 for n in lst if isinstance(n, int)])

result = sum_squares([1, 2, 'a', 11, 'b'])
print(result)