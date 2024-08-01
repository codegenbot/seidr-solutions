def longest(strings):
    return max(strings, key=len)

strings = input().split()
result = longest(strings)
print(result)