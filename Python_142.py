```
def sum_squares(lst):
    total = 0
    for num in lst:
        if not isinstance(num, int):
            raise ValueError("The list must contain only integers.")
        total += num**2
    return total

print(sum_squares([1, 2, 3]))