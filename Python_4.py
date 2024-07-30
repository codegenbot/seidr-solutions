def mean_absolute_deviation(numbers, mean):
    return sum(abs(x - mean) for x in numbers) / len(numbers)


print("Enter space-separated numbers:")
numbers = list(map(float, input().strip().split()))
result = mean_absolute_deviation(numbers, mean(numbers))
print(f"Mean Absolute Deviation: {result}")