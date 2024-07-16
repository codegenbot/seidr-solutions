strings = input().strip().split()
def longest(strings):
    return max(strings, key=len)
print(longest(strings))