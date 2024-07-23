```
from typing import List


def intersperse(delimiter: int = None) -> List[int]:
    while True:
        try:
            numbers_str = input("Enter a list of integers separated by space or comma: ")
            numbers = [int(num) for num in numbers_str.split()]
            if len(numbers) == 0:
                print("Error: Please provide at least one number.")
                continue
            delimiters = []
            while True:
                try:
                    delimiter_str = input(f"Enter the delimiter ({numbers[0]} for no delimiter): ")
                    if delimiter_str.strip() == "":
                        return numbers
                    elif int(delimiter_str) == 0:
                        raise ValueError("Delimiter cannot be zero")
                    delimiters.append(int(delimiter_str))
                    break
                except (ValueError, IndexError):
                    print("Invalid input. Please enter a valid integer or '0' for no delimiter: ")
            result = [numbers[0]]
            for i, num in enumerate(numbers[1:]):
                if len(delimiters) > 0:
                    result.extend([delimiters[i % len(delimiters)], num])
                else:
                    result.append(num)
            return result
        except (ValueError, IndexError):
            print(
                "Invalid input. Please enter a list of integers separated by space or comma: "
            )
    return []

intersperse()