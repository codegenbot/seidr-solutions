from typing import List


def rescale_to_unit() -> List[float]:
    numbers = input("Please enter space-separated floating point numbers: ")

    try:
        numbers_list = [float(x) for x in numbers.split()]
        if len(numbers_list) == 0:
            return []

        if len(set(numbers_list)) == 1:
            return [1 for _ in numbers_list]

        min_val = min(numbers_list)
        max_val = max(numbers_list)

        if max_val - min_val == 0:
            return [0 for _ in numbers_list]

        return [(x - min_val) / (max_val - min_val) for x in numbers_list]
    except ValueError:
        return ["Invalid input. Please enter only floating point numbers."]


print(rescale_to_unit())