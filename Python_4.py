import sys
def mean_absolute_deviation(numbers):
    mean = sum(numbers) / len(numbers)
    absolute_deviations = [abs(num - mean) for num in numbers]
    return sum(absolute_deviations) / len(absolute_deviations)

numbers = list(map(float, sys.stdin.readline().strip().split()))
result = mean_absolute_deviation(numbers)
print(result)