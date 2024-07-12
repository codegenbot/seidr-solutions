```
def double_the_difference(lst):
    return sum(i ** 2 for i in lst if isinstance(i, int) and i >= 0 and i % 2 != 0)

numbers = [int(num) for num in input().split()]

output = double_the_difference(numbers)

print(output)