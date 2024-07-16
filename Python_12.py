n = int(input().strip())
def longest(strings):
    return max(strings, key=len)
strings = [input() for _ in range(n)]
for s in strings:
    print(longest(s.split()))