n = int(input("Enter the number of strings: "))
strings = [input("Enter string: ") for _ in range(n)]

def longest(strings):
    return max(strings, key=len)

print(longest(strings))