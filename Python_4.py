from statistics import mean, mean_absolute_deviation
print("Enter space-separated numbers:")
numbers = list(map(float, input().strip().split()))
result = mean_absolute_deviation(numbers, mean(numbers))
print(f"Mean Absolute Deviation: {result}")