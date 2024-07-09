def longest(strings):
    if not strings:
        return None
    longest_str = max(strings, key=len)
    return max(filter(lambda x: len(x) == len(longest_str), strings))

strings = input().split()
print(longest(strings))