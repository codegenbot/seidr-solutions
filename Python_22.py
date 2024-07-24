from typing import List, Any

import sys


def main():
    values = []
    while True:
        user_input = input("Enter an integer (or 'stop' to finish): ")
        if user_input.lower() == "stop":
            break
        try:
            values.append(int(user_input))
        except ValueError:
            print(
                "Invalid input. Please enter a valid integer or type 'stop' to finish."
            )
    filtered_values = [value for value in values if isinstance(value, int)]

    print(filtered_values)


def filter_integers(values: List[Any]) -> List[int]:
    return [value for value in values if isinstance(value, int)]


if __name__ == "__main__":
    main()