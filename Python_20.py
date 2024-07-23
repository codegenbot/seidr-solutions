```Python
from typing import List, Tuple

def find_closest_elements() -> Tuple[float, float]:
    user_input = input("Enter a list of space-separated unique floating point numbers: ")
    
    try:
        numbers = [float(num) for num in user_input.split()]
        
        if len(set(numbers)) != len(numbers):
            print("Please enter unique float numbers.")
            return
        
        min_diff = float('inf')
        closest_pair = ()
        
        for i in range(len(numbers)):
            for j in range(i + 1, len(numbers)):
                diff = abs(numbers[i] - numbers[j])
                if diff < min_diff:
                    min_diff = diff
                    closest_pair = (min(numbers[i], numbers[j]), max(numbers[i], numbers[j]))
        
        return closest_pair
    
    except ValueError:
        print("Invalid input. Please enter a list of space-separated unique floating point numbers.")
        return

print(find_closest_elements())