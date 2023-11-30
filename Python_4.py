from typing import List, Union

def mean_absolute_deviation(numbers: List[Union[float, int]]) -> float:
    mean = sum(numbers) / len(numbers)
    deviation = [abs(num - mean) for num in numbers]
    return sum(deviation) / len(deviation)

# Take input from the user
numbers_input = input().split()
numbers = [float(num) for num in numbers_input]

# Call the function with the input numbers
result = mean_absolute_deviation(numbers)

# Print the result
print(result)