```
def mean_absolute_deviation(numbers):
    average = sum(numbers) / len(numbers)
    mad = sum(abs(num - average) for num in numbers) / len(numbers)
    return mad


numbers = list(map(float, input("Enter numbers separated by space: ").split()))
if len(numbers) > 0 and all(isinstance(num, (int, float)) for num in numbers):
    print(mean_absolute_deviation(numbers))
else:
    print("Invalid input. Please enter valid numbers.")