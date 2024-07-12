def mean_absolute_deviation():
    numbers = list(map(float, input().strip().split()))
    mean = sum(numbers) / len(numbers)
    absolute_deviations = [abs(num - mean) for num in numbers]
    return sum(absolute_deviations) / len(absolute_deviations)

result = mean_absolute_deviation()
print(result)