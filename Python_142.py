```
def sum_squares(numbers):
    for number in numbers:
        if not isinstance(number, (int, float)):
            return "Invalid input. Please enter a list of numbers."
    total_sum = 0
    for number in numbers:
        total_sum += number ** 2
    return total_sum