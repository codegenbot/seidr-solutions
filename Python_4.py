```
def mean_absolute_deviation(numbers):
    avg = sum(numbers) / len(numbers)
    return sum(abs(num - avg) for num in numbers) / len(numbers)


numbers = list(map(float, input("Enter numbers separated by space: ").split()))
while len(set(map(int, numbers))) != len(numbers):
    print("Invalid input. Please enter only numerical values.")
    numbers = list(map(float, input("Enter numbers separated by space: ").split())

print(mean_absolute_deviation(numbers))