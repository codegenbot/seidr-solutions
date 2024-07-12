def mean_absolute_deviation(numbers):
    numbers = list(map(float, numbers))
    mean = sum(numbers) / len(numbers)
    absolute_deviations = [abs(num - mean) for num in numbers]
    return sum(absolute_deviations) / len(absolute_deviations)

numbers = input("Enter numbers separated by space: ").strip().split()
result = mean_absolute_deviation(numbers)
print(result)