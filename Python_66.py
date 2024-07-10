```
def digitSum(s):
    s = s.lower()
    total = sum(int(c) for c in s if c.isdigit())
    return total

input_string = input("Enter a string: ")
print(digitSum(input_string))