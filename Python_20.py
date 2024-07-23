from typing import List, Tuple

def find_closest_elements() -> Tuple[float, float]:
    while True:
        try:
            numbers = [float(num) for num in input("Enter space separated numbers: ").split()]
            break
        except ValueError:
            print("Invalid input. Please enter space-separated numbers.")

    if not isinstance(numbers, list):
        return None
    if len(numbers) < 2:
        return None
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