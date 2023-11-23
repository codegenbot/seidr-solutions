from typing import List


def filter_integers(values: List[str]) -> List[int]:
    try:
        return [int(value) for value in values]
    except ValueError:
        raise ValueError(
            "Invalid input. Please enter only integers separated by a comma and a space (', ')."
        )


def main():
    input_values = input().strip().split(", ")

    if input_values:
        try:
            result = filter_integers(input_values)
            print(result)
        except ValueError as e:
            print(str(e))
    else:
        print("No input provided.")


if __name__ == "__main__":
    main()