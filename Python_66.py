def digitSum(s):
    return sum(int(c) if c.isdigit() else ord(c.upper()) - 64 for c in s)

print(digitSum(input("Enter a string: ")))