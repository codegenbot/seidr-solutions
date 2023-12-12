s = input().split()
output = ""

for i in range(len(s)):
    if "-" in s[i]:
        words = s[i].split("-")
        for j in range(len(words)):
            if j == 0:
                output += words[j]
            else:
                output += words[j].capitalize()
    else:
        output += s[i]
    
    if i != len(s) - 1:
        output += " "

print(output)