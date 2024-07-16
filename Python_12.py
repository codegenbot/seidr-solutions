def longest(strings):
    return max(strings, key=lambda x: (-len(x), x))

strings = [input().strip() for _ in range(int(input()))]
print(longest(strings))