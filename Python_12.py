from typing import List


def longest(strings: List[str]) -> str:
    if not strings:
        return ""
    longest_string = strings[0]
    for string in strings:
        if len(string) > len(longest_string):
            longest_string = string
    return longest_string


strings = []
while True:
    try:
        string = input().strip()
        if not string:
            break
        strings.append(string)
    except EOFError:
        break
    except KeyboardInterrupt:
        break

result = longest(strings)
print(result)