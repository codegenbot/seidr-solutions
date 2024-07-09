s = input().strip()
result = ""
for i in range(len(s)):
    result += chr((ord(s[i]) + i) % 26 + ord('A'))
print(result)