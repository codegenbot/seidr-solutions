s = input().strip()
result = ''.join(chr((ord(s[i]) - i) % 26 + ord('A')) for i in range(len(s))
print(result)