numbers = list(map(float, input("Enter numbers (space separated): ").split()))


def mean_absolute_deviation(data):
    mean = sum(data) / len(data)
    deviation = [(x - mean) for x in data]
    return sum([abs(x) for x in deviation]) / len(data)


print(mean_absolute_deviation(numbers))