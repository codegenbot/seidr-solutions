n = int(input())
def longest(strings):
    return max(strings, key=len)
strings = [input() for _ in range(n)]
print(longest(strings))