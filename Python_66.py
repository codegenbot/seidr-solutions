```
def digitSum(n):
    return sum(int(c) for c in str(n))

n = int(input("Enter a number: "))
print(digitSum(n))