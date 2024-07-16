def longest(strings):
    return max(strings, key=len)

n = int(input())
strings = [input().strip() for _ in range(n)]
for s in strings:
    print(longest(s.split()))