import sys


def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return [string for string in strings if string.startswith(prefix)]


strings = sys.stdin.readlines()
prefix = strings[-1].strip()
strings = strings[:-1]

filtered_strings = filter_by_prefix(strings, prefix)
print(filtered_strings)