```
def mean_absolute_deviation(data):
    mean = sum(data) / len(data)
    return sum(abs(val - mean) for val in data) / len(data)

data = list(map(float, input("Enter the numbers separated by space: ").split()))
print(mean_absolute_deviation(data))