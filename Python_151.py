```
def double_the_difference(numbers):
    odd_sum = sum(i for i in numbers if isinstance(i, int) and i % 2 != 0)
    even_sum = sum(i for i in numbers if isinstance(i, int))
    return abs(even_sum - odd_sum)*2

print(double_the_difference(input("Enter the numbers separated by space: ").split()))