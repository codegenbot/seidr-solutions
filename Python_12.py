import sys

def longest(strings):
    if not strings:
        return None
    return max(strings, key=lambda x: (len(x), x))

result = longest(sys.stdin.read().splitlines())
print(result)