from typing import List

def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s]

if __name__ == "__main__":
    import sys
    input_data = sys.stdin.read().splitlines()
    strings = input_data[0].split()
    substring = input_data[1]
    filtered_strings = filter_by_substring(strings, substring)
    print(filtered_strings)