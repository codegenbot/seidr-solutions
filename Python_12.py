n = int(input())

def longest(strings):
    return max(strings, key=len)

for _ in range(n):
    strings = input().split()
    print(longest(strings))