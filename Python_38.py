s = input().strip()
result = "".join(chr(ord(char) - 1) for char in s)
print(result)