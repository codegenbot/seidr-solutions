from typing import List


def all_prefixes(s: str) -> List[str]:
    try:
        s = input("Please enter a string: ")
    except:
        print("Error: Please provide valid input.")
        return []
    return [s[: i + 1] for i in range(len(s))]