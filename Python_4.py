```
def mean(numbers):
    return sum(numbers) / len(numbers)

def mean_absolute_deviation(numbers):
    return sum(abs(num - mean(numbers)) for num in numbers) / len(numbers)

numbers = list(map(float, input("Enter numbers separated by space: ").split()))
print(mean_absolute_deviation(numbers))