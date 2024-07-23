n = int(input("Enter a number: "))
s = input("Enter a string: ")
n -= int(''.join(filter(str.isdigit, s)))