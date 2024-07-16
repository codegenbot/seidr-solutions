def longest(strings):
    return max(strings, key=len)

strings = [input().split() for _ in range(int(input()))]
for s in strings:
    print(longest(s))