def mean_absolute_deviation(numbers):
    return sum(abs(num - mean(numbers)) for num in numbers) / len(numbers)


import statistics as stat

numbers = list(map(float, input("Enter numbers separated by space: ").split()))
print(mean_absolute_deviation(numbers))