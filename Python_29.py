from typing import List


def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    if __name__ == "__main__":
        strings = input("Enter the list of strings (space separated): ").split()
        prefix = input("Enter the prefix to filter by: ")
        result = [s for s in strings if s.startswith(prefix)]
        print(result)