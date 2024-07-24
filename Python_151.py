def double_the_difference(numbers):
    total = sum(num * 2 for num in numbers)
    average = sum(i**2 for i in numbers if isinstance(i, int) and i % 2 != 0)
    return total - (double_the_difference(abs(average - total)) * 2)