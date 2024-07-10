```
def double_the_difference(lst):
    odd_sum = sum(i**2 for i in lst if isinstance(i, int) and i >= 0 and i % 2 != 0)
    return odd_sum

numbers = [1, 2, -3, 4, 5, -6]
result = double_the_difference(numbers)
print(result)