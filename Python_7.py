from typing import List


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s]


# Read substring input
substring = input().strip()

# Read strings input until empty line is entered
strings = []
while True:
    string = input().strip()
    if not string:
        break
    strings.append(string)

result = filter_by_substring(strings, substring)
print(result)