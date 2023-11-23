import sys

def mean_absolute_deviation(numbers):
    mean = sum(numbers) / len(numbers)
    deviation = sum(abs(num - mean) for num in numbers) / len(numbers)
    return round(deviation, 2)

inputs = sys.stdin.read().splitlines()
num_test_cases = int(inputs[0])

for i in range(num_test_cases):
    user_input = list(map(float, inputs[i+1].split()))
    result = mean_absolute_deviation(user_input)
    print(result)