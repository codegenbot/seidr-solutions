```
def mean_absolute_deviation(numbers):
    mean = sum(numbers) / len(numbers)
    return sum(abs(n - mean) for n in numbers) / len(numbers)

numbers = list(map(float, input("Enter numbers (space separated): ").split()))
print(mean_absolute_deviation(numbers))