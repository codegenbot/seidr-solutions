```
from typing import Tuple

def find_closest_elements() -> Tuple[float, float]:
    input_str = input("Enter numbers separated by space: ")
    
    if not input_str:
        print("Program did not receive any input.")
        return None
    
    try:
        numbers = [float(num) for num in input_str.split()]
        
        if len(numbers) < 2:
            while True:
                confirm = input("Please enter at least two numbers to find the closest pair. Press Enter again when correct: ")
                if not confirm:
                    break
                numbers = [float(num) for num in input_str.split()]
                if len(numbers) >= 2:
                    break
        
    except ValueError:
        print("Program did not receive expected input. Please enter numbers separated by a space.")
        return None

    min_diff = float("inf")
    closest_pair = ()

    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            diff = abs(numbers[i] - numbers[j])
            if diff < min_diff:
                min_diff = diff
                closest_pair = (numbers[i], numbers[j])

    return closest_pair

result = find_closest_elements()
print("Closest pair is: ", result)