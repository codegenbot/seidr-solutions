from typing import List

def rescale_to_unit(numbers: List[float]) -> List[float]:
    if not numbers:
        return []
    min_num = min(numbers)
    max_num = max(numbers)
    return [(num - min_num) / (max_num - min_num) for num in numbers]

# Read input
input_numbers = [float(num) for num in input("Enter space-separated numbers: ").split()]

# Call the function with input and print the output
output = rescale_to_unit(input_numbers)
print(*output)