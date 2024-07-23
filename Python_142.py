```
def sum_squares(lst):
    if not all(isinstance(i, int) for i in lst):
        return "Input must be a list of integers."
    total = 0
    for i in range(len(lst)):
        if i % 3 == 0 and i % 4 != 0:
            total += lst[i] ** 2
        elif i % 4 == 0 and i % 3 != 0:
            total += lst[i] ** 3
    return total