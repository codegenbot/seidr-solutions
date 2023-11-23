import sys


def longest(strings):
    if not strings:
        return ""
    longest_string = max(strings, key=len)
    return longest_string


strings = sys.argv[1:]
result = longest(strings)
print(result)