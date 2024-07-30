print("Enter space-separated numbers:")
numbers = list(map(float, input().split()))
result = mean_absolute_deviation(numbers)
print(f"Mean Absolute Deviation: {result}")