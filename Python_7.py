from typing import List

def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    strings = input("Enter strings (comma-separated): ")
    strings = [s.strip() for s in strings.split(",")]
    return [s for s in strings if substring in s]