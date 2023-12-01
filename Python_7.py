from sys import stdin, stdout
from typing import List

def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s]

strings = stdin.readline().split()
substring = stdin.readline().strip()
filtered_strings = filter_by_substring(strings, substring)
stdout.write(' '.join(filtered_strings))