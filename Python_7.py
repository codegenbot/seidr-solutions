from typing import List

def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s]

if __name__ == "__main__":
    n = int(input().strip())  # Read the number of strings
    strings = [input().strip() for _ in range(n)]
    substring = input().strip()
    filtered_strings = filter_by_substring(strings, substring)
    print(filtered_strings)