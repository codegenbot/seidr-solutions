```
def double_the_difference(numbers):
    total = 0
    average = sum(num for num in numbers if isinstance(num, int) and num >= 0) / len([num for num in numbers if isinstance(num, int) and num >= 0])
    for num in numbers:
        if isinstance(num, int) and num >= 0:
            total += (num - average) ** 2
    return total * 2