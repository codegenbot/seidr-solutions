def longest(strings):
    longest_str = max(strings, key=len)
    return max(filter(lambda x: len(x) == len(longest_str), strings))

strings = input().split()
result = longest(strings)
print(result)