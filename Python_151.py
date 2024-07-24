def double_the_difference(numbers):
    total = sum(i**2 for i in numbers if isinstance(i, int) and i >= 0 and i % 2 != 0)
    half_sum = (sum(i for i in numbers)) / len([i for i in numbers if i >= 0])
    return abs(total - half_sum * 2)

print(double_the_difference([int(i) for i in input().split(',') if i.isdigit()]))