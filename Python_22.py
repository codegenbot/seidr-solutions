import sys
from typing import List


def filter_integers(values: List[str]) -> List[int]:
    return [int(value) for value in values if value.isdigit()]


def main():
    input_values = sys.stdin.readline().strip().split(",")

    if all(value.isdigit() for value in input_values):
        if input_values:
            result = filter_integers(input_values)
            if result:
                print(result)
            else:
                print("No integers found.")
        else:
            print("No input provided.")
    else:
        print("Invalid input. Please enter only integers separated by commas (',').")
        print("Example: 1,2,3")


if __name__ == "__main__":
    main()