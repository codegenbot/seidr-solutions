from typing import List

def all_prefixes() -> List[str]:
    s = input("Please enter a string: ")
    if not s:
        print("Error: Please provide valid input.")
        return []
    return [s[: i + 1] for i in range(len(s))]