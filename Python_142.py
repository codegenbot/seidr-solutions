```
def sum_squares(lst):
    total = 0
    for num in lst:
        if isinstance(num, int):
            total += num**2
        else:
            return None

    return total


print(sum_squares([1, 2, 3]))