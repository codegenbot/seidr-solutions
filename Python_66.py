```
def digitSum(s):
    return sum(int(c) for c in s if c.isdigit())

print(digitSum(input("Input your string here: ")))