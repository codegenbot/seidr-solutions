```
from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    if not numbers:
        raise ValueError("Input list is empty")

    for num in numbers:
        if isinstance(num, str):
            try:
                float(num)
            except ValueError:
                raise ValueError("Input list must contain only numbers")
        elif not isinstance(num, (int, float)):
            raise ValueError("Input list must contain only numbers")

    min_val = min(numbers)
    max_val = max(numbers)
    return [(x - min_val) / (max_val - min_val) for x in numbers]


if __name__ == "__main__":
    try:
        result = rescale_to_unit([float(x) for x in input("Enter space-separated numbers: ").split()])
        print(result)
    except ValueError as e:
        print(f"Error: {e}")