def mean_absolute_deviation(numbers):
    mean = sum(numbers) / len(numbers)
    absolute_deviations = [abs(num - mean) for num in numbers]
    return sum(absolute_deviations) / len(absolute_deviations)


print("Enter a space-separated list of numbers:")
numbers = list(map(float, input().split()))
result = mean_absolute_deviation(numbers)
print(result)