```
def sum_squares(lst):
    return sum([n ** 2 for n in lst])

result = sum_squares([1, 2, 3, 11, 12])
print(result)