```
import re


def digitSum():
    s = input("Enter a string of digits: ")
    if re.match("^[0-9]+$", s):
        return sum(int(c) for c in s)
    else:
        print("Invalid input. Please enter only digits.")
        return None


result = digitSum()
if result is not None:
    print(result)
else:
    print("Invalid input. Please enter only digits.")