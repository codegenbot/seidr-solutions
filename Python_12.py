from typing import List, Optional
def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    max_length = 0
    longest_str = None
    for s in strings:
        try:
            if len(s) > max_length:
                max_length = len(s)
                longest_str = s
        except ValueError:
            print("Invalid input. Please enter only strings.")
            return None
    return longest_str

strings = input("Enter the list of strings separated by space: ").split()
print(longest(strings))