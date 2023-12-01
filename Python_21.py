from typing import List

def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_num = min(numbers)
    max_num = max(numbers)
    return [(num - min_num) / (max_num - min_num) for num in numbers]

# Read input from the user
input_list = [float(num) for num in input().split()]

# Call the function with the input
result = rescale_to_unit(input_list)

# Print the result
print(result)