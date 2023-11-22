from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    deviation = [abs(num - mean) for num in numbers]
    return sum(deviation) / len(deviation)

# Read n from input
n = int(input())

# Read numbers from input and split by space
numbers = list(map(float, input().strip().split()))

# Check if length of numbers is equal to n
if len(numbers) != n:
    print("Incorrect number of inputs")
    exit(1)

# Calculate and print the result
result = mean_absolute_deviation(numbers)
print(result)