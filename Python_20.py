from typing import List, Tuple

def find_closest_elements() -> Tuple[float, float]:
    numbers = input("Enter a list of numbers: ")
    
    try:
        numbers = [float(num) for num in numbers.split(",")]
        
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
        return "Invalid input. Please enter a list of comma-separated float values."