def mean_absolute_deviation(numbers):
    if len(numbers) < 2:
        return None
    mean = sum(numbers) / len(numbers)
    return sum(abs(num - mean) for num in numbers) / len(numbers)


numbers = list(map(float, input("Enter numbers (space separated): ").split()))
print(mean_absolute_deviation(numbers))