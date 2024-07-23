```
from typing import List, Tuple

def find_closest_elements():
    numbers = input("Enter a list of floating point numbers separated by space: ").split()
    
    try:
        numbers = [float(num) for num in numbers]
        
        min_diff = float('inf')
        closest_pair = ()
        
        if len(set(numbers)) != len(numbers):
            return 
        for i in range(len(numbers)):
            for j in range(i + 1, len(numbers)):
                diff = abs(numbers[i] - numbers[j])
                if diff < min_diff:
                    min_diff = diff
                    closest_pair = (min(numbers[i], numbers[j]), max(numbers[i], numbers[j]))
        
        return closest_pair
        
    except ValueError:
        print("Invalid input. Please enter a list of floating point numbers.")