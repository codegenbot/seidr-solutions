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
    string = input().strip()
    if string == "":
        break
    strings.append(string)

result = longest(strings)
print(result)