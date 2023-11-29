'''
Expected input format: The code currently expects input as space-separated numbers. Modify the code to expect input as an integer n in the first line, followed by n space-separated numbers on the second line.

Modified code:
'''

from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    deviation = [abs(num - mean) for num in numbers]
    return sum(deviation) / len(deviation)


n = int(input())
numbers = list(map(float, input().split()))
result = mean_absolute_deviation(numbers)
print(result)