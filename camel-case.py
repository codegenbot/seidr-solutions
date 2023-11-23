s = input().split()
result = ""
for word in s:
    if '-' in word:
        result += word.replace('-', '').capitalize()
    else:
        result += word
print(result)