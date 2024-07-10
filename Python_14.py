from typing import List


def get_all_prefixes(s: str) -> List[str]:
    return [s[:i] for i in range(len(s))]


def all_prefixes() -> None:
    while True:
        try:
            s = input("Please enter a string: ")
            if not s.strip() or not s.isalnum():
                print("Error: Please provide a non-empty alphanumeric string.")
            else:
                break
        except ValueError as e:
            print(f"Invalid input. Please enter a string.")

    while True:
        try:
            num = int(input("Please enter the number of prefixes: "))
            if num <= 0:
                print("Error: Number of prefixes must be positive.")
            else:
                break
        except ValueError as e:
            print(f"Invalid input. Please enter an integer.")

    print("\n".join(get_all_prefixes(s)[:num]))