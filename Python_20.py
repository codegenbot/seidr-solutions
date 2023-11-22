from typing import List, Tuple


def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers.sort()
    min_diff = float("inf")
    closest_pair = ()

    for i in range(len(numbers) - 1):
        diff = numbers[i + 1] - numbers[i]
        if diff < min_diff:
            min_diff = diff
            closest_pair = (numbers[i], numbers[i + 1])

    return closest_pair


try:
    input_str = input()
    
    if not input_str.strip():
        print("No input provided")
        exit()

    numbers = list(map(float, input_str.split()))
    result = find_closest_elements(numbers)
    print(result)

except ValueError:
    print("Invalid input format")
    exit()