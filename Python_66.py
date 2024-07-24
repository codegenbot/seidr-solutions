def digitSum(s):
    return sum(int(c) for c in s if c.isdigit()) or -1

input_s = str(input("Enter an integer: "))
print(digitSum(input_s))