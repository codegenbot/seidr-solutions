from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)

# Read input from user, input is a single line of words separated by spaces
if __name__ == "__main__":
    input_strings = input().split()
    print(longest(input_strings))