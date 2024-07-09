```
def sum_squares(lst):
    total = 0
    for num in lst:
        if isinstance(num, int):
            if num % 3 == 0 and num % 4 != 0:
                total += num**2
            elif num % 4 == 0 and num % 3 != 0:
                total += num**3
        else:
            return "Error: The list must only contain integers."
    return total