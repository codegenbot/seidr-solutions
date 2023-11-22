s = input().split()
result = ""
for i in range(len(s)):
    if "-" in s[i]:
        words = s[i].split("-")
        for j in range(len(words)):
            if j == 0:
                result += words[j]
            else:
                result += words[j].capitalize()
    else:
        result += s[i]
    if i != len(s) - 1:
        result += " "

print(result)