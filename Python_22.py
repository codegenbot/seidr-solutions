```
from typing import List


def get_values() -> List[int]:
    result = []
    while True:
        values = input("Enter some values (separated by space): ")
        for value in values.split():
            if value.isdigit():
                result.append(int(value))
            else:
                print(f"Invalid input: {value}. Please enter integers only.")
        if all(
            val.replace(".", "", 1).replace("-", "", 1).isdigit()
            for val in values.split()
        ):
            break
    return result


def filter_integers(input_list: List[int]) -> List[int]:
    return [value for value in input_list if isinstance(value, int)]