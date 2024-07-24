```
def sum_squares(lst):
    if not all(isinstance(x, int) for x in lst):
        return "Invalid input. Please enter integers."
    return sum([n ** 2 for n in lst])

result = sum_squares([1, 2, 3, 11, 12])
print(result)