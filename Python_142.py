```
def sum_squares(lst):
    total_sum = 0
    for num in lst:
        if isinstance(num, int) or isinstance(num, float):
            if num % 3 == 0 and num % 4 != 0:
                total_sum += num ** 2
            elif num % 4 == 0 and num % 3 != 0:
                total_sum += num ** 3
        else:
            print("Invalid input. Please enter integers or floats.")
    return total_sum