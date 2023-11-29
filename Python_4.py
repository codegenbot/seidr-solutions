from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    deviation = [abs(num - mean) for num in numbers]
    return sum(deviation) / len(deviation)

test_input = '''3
1.5
2.5
3.5'''

lines = test_input.strip().split('\n')
n = int(lines[0])
numbers = [float(line) for line in lines[1:]]
print(mean_absolute_deviation(numbers))