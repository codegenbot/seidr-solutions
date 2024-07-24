```
import re

def digitSum(s):
    return sum(int(c) if c.isdigit() else ord(c.upper()) - 64 for c in re.sub(r'[^A-Za-z]', '', s))

while True:
    try:
        s = input("Enter a string: ")
        print(digitSum(s))
        break
    except Exception as e:
        print(f"Error occurred: {str(e)}")