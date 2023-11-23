from typing import List


def filter_integers(values: List[str]) -> List[int]:
    return [int(value) for value in values if value.isdigit() or value == ""]


def main():
    values = [value.strip() for value in input("Enter a comma-separated list of integers: ").split(",")]

    if all(value.isdigit() or value == "" for value in values):
        result = filter_integers(values)
        if result and any(isinstance(val, int) for val in result):
            print(result)
        else:
            print("No integers found.")
    else:
        print("Invalid input. Please enter only integers separated by commas (',').")
        print("Example: 1,2,3")


if __name__ == "__main__":
    main()