```
from typing import List


def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return [s for s in strings if s.startswith(prefix)]


if __name__ == "__main__":
    user_input = input("Enter the list of strings (comma-separated): ")
    user_strings = [string.strip() for string in user_input.split(",")]
    
    user_prefix = input("Enter the prefix: ")
    
    print(filter_by_prefix(user_strings, user_prefix))