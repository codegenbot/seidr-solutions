def mean_absolute_deviation(numbers):
    mean = sum(numbers) / len(numbers)
    deviations = [abs(num - mean) for num in numbers]
    return sum(deviations) / len(deviations)

numbers = list(map(float, input().strip().split()))
result = mean_absolute_deviation(numbers)
print(result)