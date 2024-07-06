```
def double_the_difference(numbers):
    odd_sum = sum(i for i in numbers if isinstance(i, int) and i % 2 != 0)
    return (sum(i**2 for i in numbers if isinstance(i, int) and i > 0) - odd_sum * 2) / 2