def mean_absolute_deviation(numbers):
    mean = sum(numbers) / len(numbers)
    deviations = [abs(num - mean) for num in numbers]
    return sum(deviations) / len(deviations)


print("Enter space-separated numbers:")
numbers = list(map(float, input().strip().split()))
result = mean_absolute_deviation(numbers)
print(f"Mean Absolute Deviation: {result}")