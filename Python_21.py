from typing import List


def rescale_to_unit() -> List[float]:
    while True:
        try:
            numbers = list(map(float, input("Enter space-separated floating point numbers: ").split()))
            if len(numbers) == 0:
                return []
            
            min_val = min(numbers)
            max_val = max(numbers)

            if max_val - min_val == 0:
                return [1.0] * len(numbers)

            return [(x - min_val) / (max_val - min_val) for x in numbers]
        except ValueError:
            print("Invalid input! Please enter valid floating point numbers.")