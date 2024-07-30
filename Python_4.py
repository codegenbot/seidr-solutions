from statistics import mean

def mean_absolute_deviation(numbers):
    mean_value = mean(numbers)
    deviations = [abs(num - mean_value) for num in numbers]
    return mean(deviations)