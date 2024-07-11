from typing import Tuple

def find_closest_elements() -> Tuple[float, float]:
    try:
        numbers = list(map(float, input("Enter space-separated numbers: ").split()))
        if len(numbers) < 2:
            return ()
        min_diff = float("inf")
        closest_pair = ()
        for i in range(len(numbers)):
            for j in range(i + 1, len(numbers)):
                diff = abs(numbers[j] - numbers[i])
                if diff < min_diff:
                    min_diff = diff
                    closest_pair = (numbers[i], numbers[j])
        return closest_pair
    except ValueError:
        return ()