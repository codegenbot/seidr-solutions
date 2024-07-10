```
def digitSum():
    s = input("Enter a string: ")
    total = sum(int(c) for c in s if c.isdigit())
    print(total)

digitSum()