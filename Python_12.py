strings = input().split(',')
def longest(strings):
    return max(strings, key=len)
print(longest(strings))