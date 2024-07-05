from typing import List

def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s]

if __name__ == "__main__":
    print("Enter strings separated by space:")
    strings = input().strip().split()
    print("Enter the substring:")
    substring = input().strip()
    filtered_strings = filter_by_substring(strings, substring)
    print(filtered_strings)