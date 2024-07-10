```
def sum_squares(lst):
    total = 0
    for num in lst:
        if type(num) != int:
            return "Invalid input: list must contain integers."
        elif (num % 3 == 0 and num % 4 != 0) or (num % 4 == 0 and num % 3 != 0):
            total += num ** ((num % 4 == 0) * 2 + 1)
    return total