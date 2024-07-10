import re
def digitSum(n=""):
    if isinstance(n, str):
        n = sum(int(digit) for digit in re.sub("[^0-9]", "", n.lower()))
    elif not n:  
        n = int(input("Enter a number: "))
    return sum(int(digit) for digit in str(abs(n)))