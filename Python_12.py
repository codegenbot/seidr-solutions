import sys

def longest(strings):
    if not strings:
        return None
    return max(strings, key=lambda x: (len(x), strings.index(x)))

strings = sys.stdin.readline().strip().split()
result = longest(strings)
print(result)