```
def mean_absolute_deviation(numbers):
    average = sum(numbers) / len(numbers)
    return sum([abs(average - x) for x in numbers]) / len(numbers)

numbers = [int(x) for x in input("Enter numbers separated by spaces: ").split()]
print(mean_absolute_deviation(numbers))