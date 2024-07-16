def longest(strings):
    return max(strings, key=len)

n = int(input("Enter the number of strings: "))
strings = [input().strip() for _ in range(n)]
print(longest(strings))