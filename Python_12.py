from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    strings = [s for s in strings if s]  # Remove empty strings
    if not strings:
        return None
    return max(strings, key=len)

if __name__ == "__main__":
    input_data = input("Enter the list of strings separated by commas: ").strip()
    if not input_data:
        strings = []
    else:
        strings = [s.strip() for s in input_data.split(',')]
    print(longest(strings))