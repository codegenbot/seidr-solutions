from typing import List


def filter_integers(values: List[str]) -> List[int]:
    return [int(value) for value in values if value.isdigit()]


def main():
    values = input("Enter values separated by commas: ").strip().split(",")
    result = filter_integers(values)
    if result:
        print(result)
    else:
        print("No integers found.")


if __name__ == "__main__":
    main()