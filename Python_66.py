```
def digitSum(s):
    return sum(int(c) for c in s if c.isdigit()) or 0

input_s = str(input("Enter a string: "))
print(sum(int(i) for i in input_s if i.isdigit()) or 0)