def mean_absolute_deviation(numbers):
    average = sum(numbers) / len(numbers)
    mad = sum(abs(num - average) for num in numbers) / len(numbers)
    return mad

numbers = [int(x) for x in input("Enter numbers separated by spaces: ").split()]
print(mean_absolute_deviation(numbers))