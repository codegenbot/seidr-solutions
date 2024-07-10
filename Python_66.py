```
import re

def digitSum(n=""):
    if not n:
        n = input("Enter a number: ")
    return sum(int(digit) for digit in re.sub('[^0-9]', '', str(n)))