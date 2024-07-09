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
                return "Only integers divisible by either 3 or 4 are allowed"
        else:
            return "Only integers are allowed"
    return total