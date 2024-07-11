```
def sum_squares(lst):
    total = 0
    for num in lst:
        if isinstance(num, int) and isinstance(lst, list):
            if num % 2 == 0 and num % 3 != 0:
                total += num**2
            elif (num % 4 == 0 and num % 6 != 0) or (num % 4 == 0 and num % 6 == 0):
                if num % 6 == 0:
                    total += num**2
                else:
                    total += num**3
        else:
            return "Invalid input. Please provide a list of integers."
    return total