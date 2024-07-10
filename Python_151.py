```
def double_the_difference(numbers):
    odd_sum = sum(i**2 for i in numbers if isinstance(i, int) and i >= 0 and i % 2 != 0)
    return abs(odd_sum - min(numbers)) * 2

print(double_the_difference([7, 1, 2, 3]))