def sum_squares(lst):
    return sum(i**2 for i in lst)

result = sum_squares([1, 2, 3, 11, 12])
print(check(result))