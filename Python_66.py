import re

def digitSum(s):
    return sum(int(c) if c.isdigit() else ord(c.upper()) - 64 for c in re.sub(r'[^A-Za-z]', '', s))

print(digitSum(input("Enter a string: ")))