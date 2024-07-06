```
from typing import List, Tuple

def find_closed_elements(numbers: List[float]) -> Tuple[float, float]:
    min_diff = float('inf')
    closest_pair = ()
    
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            diff = abs(numbers[i] - numbers[j])
            if diff < min_diff:
                min_diff = diff
                closest_pair = (numbers[i], numbers[j])
    
    return closest_pair

if __name__ == "__main__":
    main()

def main():
    numbers = [float(num) for num in input("Enter the numbers separated by spaces: ").split()]
    print(find_closed_elements(numbers))