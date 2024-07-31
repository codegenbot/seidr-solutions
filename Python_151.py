```
def double_the_difference(numbers, odd_sum):
    return (sum(i**2 for i in numbers if isinstance(i, int) and i >= 0 and i % 2 != 0) - odd_sum) * 2