```
def double_the_difference(numbers):
    numbers.sort()
    min_val = numbers[0]
    max_val = numbers[-1]
    return (max_val - min_val) * 2

print(double_the_difference([1, 2, -3, 4]))