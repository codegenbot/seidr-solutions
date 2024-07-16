def longest(strings):
    return max(strings, key=len)

strings = [input().strip() for _ in range(int(input()))]
print(longest(strings))