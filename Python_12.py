def longest(strings):
    return max(strings, key=len)

n = int(input())
strings = [input().strip() for _ in range(n)]
print(longest(strings))