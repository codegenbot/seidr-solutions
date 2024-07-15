def sum_squares(lst):
    total = 0
    for num in lst:
        if isinstance(num, int):
            total += num**2
        else:
            raise ValueError("The list must contain only integers.")
    return total if len(lst) > 0 else 0

print(sum_squares([1, 2, 3]))