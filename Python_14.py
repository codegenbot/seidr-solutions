```
from typing import List


def get_all_prefixes(s: str) -> List[str]:
    return [s[: i + 1] for i in range(len(s))]


def all_prefixes() -> None:
    num_cases = int(input("Enter the number of test cases: "))
    while num_cases > 0:
        try:
            s = input("Please enter a string: ")
            if not s.strip():
                print("Error: Please provide a non-empty string.")
                continue
            print("\n".join(get_all_prefixes(s)))
            num_cases -= 1
        except Exception as e:
            print(f"Unexpected error occurred: {e}")
            break


if __name__ == "__main__":
    all_prefixes()