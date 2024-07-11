```
from typing import List

def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if isinstance(s, str) and substring in s]

user_input = input("Enter a list of strings (separated by commas): ")
strings = [s.strip() for s in user_input.split(",")]
filter_by_substring(strings, "substring_to_search_for")