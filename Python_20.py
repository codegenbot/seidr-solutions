```
from typing import List, Tuple

def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    min_diff = float('inf')
    closest_pair = ()
    
    for i in range(len(numbers)):
        for j in range(i+1, len(numbers)):
            diff = abs(numbers[i] - numbers[j])
            if diff < min_diff:
                min_diff = diff
                closest_pair = (numbers[i], numbers[j])
                
    return closest_pair

if __name__ == "__main__":
    numbers = input("Enter the list of floating point numbers, space-separated: ")
    numbers = [float(num) for num in numbers.split()]
    print(find_closest_elements(numbers))