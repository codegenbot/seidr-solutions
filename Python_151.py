```
def double_the_difference(numbers):
    total_square = sum(i**2 for i in numbers if isinstance(i, int) and i >= 0)
    half_total = (sum(numbers) / len([i for i in numbers if i >= 0])) * len([i for i in numbers if i >= 0])
    return abs(total_square - half_total)

print(double_the_difference([int(i) for i in input().split(',') if i.isdigit()]))