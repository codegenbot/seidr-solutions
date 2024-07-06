```
import re
def digitSum():
    n = int(input("Enter a number: "))
    return sum(int(i) for i in str(n))

digitSum()