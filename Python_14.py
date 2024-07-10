from typing import List

def all_prefixes() -> List[str]:
    result = []
    s = input("Please enter a string: ")
    if not s:
        print("Error: Please provide valid input.")
    else:
        for i in range(len(s)+1):
            result.append(s[:i])
    return result