from typing import List

def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_num = min(numbers)
    max_num = max(numbers)
    return [(x - min_num) / (max_num - min_num) for x in numbers]

# Read input from user
numbers = list(map(float, input().split()))

# Call the function with input list and print the result
print(rescale_to_unit(numbers))