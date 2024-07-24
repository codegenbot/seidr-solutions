def digitSum(s):
    return sum(int(c) for c in s if c.isdigit()) or 0

input_s = str(input("Enter a string: "))
if input_s:
    print(digitSum(input_s))
else:
    print(0)