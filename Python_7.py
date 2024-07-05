from typing import List

def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s]

if __name__ == "__main__":
    strings = input("Enter strings separated by space: ").split()
    substring = input("Enter substring: ").strip()
    filtered_strings = filter_by_substring(strings, substring)
    print(filtered_strings)