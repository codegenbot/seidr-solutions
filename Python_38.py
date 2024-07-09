s = input("Enter a string:")
result = "".join(chr(((ord(char) - ord("a") - 1) % 26) + ord("a")) for char in s)
print(result)