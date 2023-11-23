from typing import List


def filter_integers(values: List[str]) -> List[int]:
    return [int(value) for value in values]


def main():
    values = []
    while True:
        user_input = input("Enter a comma-separated list of values: ").strip()
        if not user_input:
            print("No input provided.")
            return
        values = user_input.split(",")
        if all(value.isdigit() for value in values):
            break
        print("Invalid input. Please enter comma-separated integers only.")

    result = filter_integers(values)
    print(result or "No integers found.")


if __name__ == "__main__":
    main()