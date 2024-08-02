```
def double_the_difference(numbers):
    odd_sum = sum(i for i in numbers if isinstance(i, int) and i >= 0 and i % 2 != 0)
    return (abs(odd_sum - min(numbers)) + abs(odd_sum - max(numbers))) / 2