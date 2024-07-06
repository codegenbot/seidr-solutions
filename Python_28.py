```
strings = input("Please enter a list of strings (separated by any character): ")
print(''.join(map(str.strip, strings.split())))