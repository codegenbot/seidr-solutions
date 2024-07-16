n = int(input())
def longest(strings):
    return max(strings, key=len)
strings = [input().split() for _ in range(n)]
for s in strings:
    print(longest(s))