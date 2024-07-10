def mean_absolute_deviation(numbers):
    average = sum(numbers) / len(numbers)
    mad = sum(abs(num - average) for num in numbers) / len(numbers)
    return mad


numbers = list(map(float, input("Enter numbers separated by space: ").split()))
print(mean_absolute_deviation(numbers))