from typing import List


def filter_integers(values: List[str]) -> List[int]:
    return [int(value) for value in values if value.isdigit()]


def main():
    values_str = input()
    if not values_str:
        print("No input provided.")
        return
    values = values_str.split(",")
    result = filter_integers([value.strip() for value in values])
    print(result or "No integers found.")


if __name__ == "__main__":
    main()