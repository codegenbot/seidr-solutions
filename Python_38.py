s = input("Enter a string:")
result = "".join(chr(ord(char) - 1) for char in s)
print(result)