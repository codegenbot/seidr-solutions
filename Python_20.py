```
from typing import List, Tuple

def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers = [float(num) for num in input("Enter numbers separated by space: ").split()]
    min_diff = float("inf")
    closest_pair = ()

    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            diff = abs(numbers[i] - numbers[j])
            if diff < min_diff:
                min_diff = diff
                closest_pair = (numbers[i], numbers[j])

    return closest_pair

while True:
    result = find_closest_elements(list(map(float, input("Enter numbers separated by space: ").split())))
    print("Closest pair is: ", result)
    response = input("Do you want to calculate again? (y/n): ")
    if response.lower() != 'y':
        break