```
import re
def digitSum(n):
    return sum(int(i) for i in str(n))

n = int(input("Enter a number: "))
print(digitSum(n))