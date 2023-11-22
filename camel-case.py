s = input().split('-')
result = s[0]
for i in range(1, len(s)):
    result += s[i].capitalize()
print(result)