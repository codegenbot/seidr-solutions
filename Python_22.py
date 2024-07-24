```
from typing import List, Any

import sys


def main():
    values = []
    while True:
        value = input("Enter an integer (or 'stop' to finish): ")
        if value.lower() == "stop":
            break
        while True:
            try:
                values.append(int(value))
                break
            except ValueError:
                print(
                    "Invalid input. Please enter a valid integer or type 'stop' to finish."
                )
    filtered_values = filter_integers(values)

    print(filtered_values)


def filter_integers(values: List[Any]) -> List[int]:
    return [value for value in values if isinstance(value, int) and not isinstance(value, bool)]


if __name__ == "__main__":
    main()