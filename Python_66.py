```
s = input("Enter a string: ")
def digitSum(s):
    return sum(ord(c) - 55 if 'A' <= c <= 'Z' else ord(c) for c in s)
print(digitSum(s))