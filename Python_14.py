from typing import List


def get_all_prefixes(s: str) -> List[str]:
    return [s[:i+1] for i in range(len(s))]


def all_prefixes() -> None:
    while True:
        try:
            s = input("Please enter a string: ")
            if not isinstance(s, str):
                print("Error: Please provide a string.")
            else:
                break
        except Exception as e:
            print(f"Unexpected error occurred: {e}")
    print("\n".join(get_all_prefixes(s)))