import sys
s = sys.stdin.readline().rstrip()
result = ""
for char in s:
    result += chr(ord(char) - 1)
print(result)