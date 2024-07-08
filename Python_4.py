```Python
from statistics import mean, stdev

def mean_absolute_deviation(data):
    return sum(abs(x - mean(data)) for x in data) / len(data)

data = list(map(float, input().split()))
print(mean_absolute_deviation(data))