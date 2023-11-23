from typing import List


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s]


# Read substring input
substring = input().strip()

# Read strings input
strings = []
while True:
    try:
        string = input().strip()
        if string:
            strings.append(string)
        else:
            break
    except EOFError:
        break

result = filter_by_substring(strings, substring)
print(result)