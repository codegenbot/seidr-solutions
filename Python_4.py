```Python
def mean_absolute_deviation():
    numbers = list(map(float, input("Enter space-separated numbers: ").split()))
    return sum(numbers) / len(numbers), sum(abs(num - sum(numbers)/len(numbers)) for num in numbers) / len(numbers)

mean_absolute_deviation()