from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    deviation = [abs(num - mean) for num in numbers]
    return sum(deviation) / len(deviation)

# Read input from user
n = int(input()) 
numbers = list(map(float, input().split())) 

# Call the function with the input
result = mean_absolute_deviation(numbers)

# Output the result
print(result)