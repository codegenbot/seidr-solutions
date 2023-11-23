def mean_absolute_deviation(numbers):
    mean = sum(numbers) / len(numbers)
    deviation = sum(abs(num - mean) for num in numbers) / len(numbers)
    return round(deviation, 2)


user_input = list(map(float, input().split()))

result = mean_absolute_deviation(user_input)
print("{:.2f}".format(result))