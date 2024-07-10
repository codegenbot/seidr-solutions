from typing import List


def get_all_prefixes(s: str) -> List[str]:
    return [s[:i+1] for i in range(len(s))]


def all_prefixes() -> None:
    while True:
        try:
            s = input("Please enter a string: ")
            if not s.strip():
                print("Error: Please provide a non-empty string.")
            else:
                break
        except ValueError as e:
            print(f"Invalid input. Please enter a string.")
    print("\n".join(get_all_prefixes(s)))