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
        while True:
            input_str = input("Enter space-separated numbers: ")
            if not input_str:
                print("No input provided")
                exit()

            input_list = [x.strip() for x in input_str.split()]
            if any(not x.replace('.', '', 1).replace('-', 1).isnumeric() for x in input_list):
                print("Invalid input. Please enter space-separated numbers.")
            else:
                result = rescale_to_unit([float(x) for x in input_list])
                print(result)
                break
    except ValueError as e:
        print(f"Error: {e}")