from typing import List

def all_prefixes(s: str) -> List[str]:
    if not s:
        print("Error: Please provide valid input.")
        return []
    return [s[:i+1] for i in range(len(s))]