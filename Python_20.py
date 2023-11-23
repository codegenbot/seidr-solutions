from typing import List, Tuple

def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers.sort()
    min_diff = float('inf')
    closest_pair = ()
    
    for i in range(len(numbers)-1):
        diff = numbers[i+1] - numbers[i]
        if diff < min_diff:
            min_diff = diff
            closest_pair = (numbers[i], numbers[i+1])
    
    return closest_pair

# Read input from user
input_str = input().strip()
numbers = [float(num) for num in input_str.split()]

# Call the function with the input list
result = find_closest_elements(numbers)

# Print the result
print(result)