from typing import List


def filter_integers(values: List[str]) -> List[int]:
    return [int(value) for value in values]


def main():
    input_values = input().split(",")

    if len(input_values) > 0:
        result = filter_integers(input_values)
        print(result)
    else:
        print("No input provided.")


if __name__ == "__main__":
    main()