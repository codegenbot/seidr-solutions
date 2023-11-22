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

# Prompt the user to enter the numbers
numbers_input = input("Enter the numbers (separated by spaces): ").strip().split()
numbers = [float(x) for x in numbers_input]

# Call the function and print the result
result = find_closest_elements(numbers)
print("Closest pair: ", result)