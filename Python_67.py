```
n = int(input("Enter a number: "))
s = str(input("Enter a string: "))
n -= int(''.join(filter(str.isdigit, s)))