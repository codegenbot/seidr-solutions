```
def sum_squares(numbers):
    for number in numbers:
        if not isinstance(number, (int, float)):
            raise TypeError("Invalid input: {}".format(number))
    total_sum = 0
    for number in numbers:
        total_sum += number ** 2
    return total_sum