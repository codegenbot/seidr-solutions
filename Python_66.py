def digitSum(s):
    return sum(ord(c) for c in s)


print(digitSum(input("Enter a string: ")))