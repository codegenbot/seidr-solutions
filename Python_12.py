strings = input().split()


def longest(strings):
    if not strings:
        return None
    return max(strings, key=lambda x: (len(x), x))


print(longest(strings))