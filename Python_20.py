from typing import Tuple

def find_closest_elements() -> Tuple[float, float]:
    numbers = input("Enter space separated numbers: ")
    
    try:
        numbers = [float(num) for num in numbers.split()]
    except ValueError:
        return None  # Return None if there's an error converting to float
    
    if not isinstance(numbers, list) or len(numbers) < 2:
        return None  # Check if the input is a valid list with at least two elements

    numbers.sort()
    min_diff = float("inf")
    closest_pair = ()

    for i in range(len(numbers) - 1):
        diff = abs(numbers[i] - numbers[i + 1])
        if diff < min_diff:
            min_diff = diff
            closest_pair = (numbers[i], numbers[i + 1])

    return closest_pair


print(find_closest_elements())