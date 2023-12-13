from typing import List

def longest(strings: List[str]) -> str:
    if len(strings) == 0:
        return ""
    longest_string = strings[0]
    for string in strings:
        if len(string) > len(longest_string):
            longest_string = string
    return longest_string

longest([])