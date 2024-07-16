def longest(strings):
    return max(strings, key=len)

strings = [input().split()]

for s in strings:
    print(longest(s))