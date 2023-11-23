from typing import List


def filter_integers(values: List[str]) -> List[int]:
    return [int(value) for value in values if value.isdigit()]


def main():
    values = input("Enter a comma-separated list of values: ")
    if not values:
        print("No input provided.")
        return
    result = filter_integers([value.strip() for value in values.split(",")])
    print(result or "No integers found.")


if __name__ == "__main__":
    main()