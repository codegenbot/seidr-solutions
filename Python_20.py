from typing import Tuple

def find_closest_elements() -> Tuple[float, float]:
    while True:
        try:
            numbers = input("Enter space-separated numbers: ").split()
            numbers = [float(num) for num in numbers]
            break
        except ValueError:
            print("Invalid input! Please enter space-separated numbers.")

    min_diff = float("inf")
    closest_pair = ()

    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            diff = abs(numbers[i] - numbers[j])
            if diff < min_diff:
                min_diff = diff
                closest_pair = (numbers[i], numbers[j])

    return closest_pair

print(find_closest_elements())