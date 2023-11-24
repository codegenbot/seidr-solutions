s = input()
words = s.split()
output = ""
for word in words:
    if "-" in word:
        parts = word.split("-")
        for i in range(len(parts)):
            if i == 0:
                output += parts[i]
            else:
                output += parts[i].capitalize()
    else:
        output += word
    output += " "
print(output.strip())