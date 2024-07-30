def mean_absolute_deviation(numbers):
    # Calculate the mean
    mean = sum(numbers) / len(numbers)
    
    # Calculate the absolute deviations
    deviations = [abs(num - mean) for num in numbers]
    
    # Calculate the mean absolute deviation
    mad = sum(deviations) / len(deviations)
    
    return mad

print("Enter space-separated numbers:")
numbers = list(map(int, input().split()))

result = mean_absolute_deviation(numbers)
print("Mean Absolute Deviation:", result)