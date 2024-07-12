```
from typing import List


def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return [s for s in strings if s.startswith(prefix)]


def main():
    while True:
        try:
            prefix = input("Enter the prefix: ")
            strings = input("Enter the list of strings (space-separated): ").split()
            result = filter_by_prefix(strings, prefix)
            print(result)
            break
        except Exception as e:
            print(f"An error occurred: {str(e)}")

if __name__ == "__main__":
    main()