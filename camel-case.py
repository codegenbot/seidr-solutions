words = input().split()
result = ""
for i, word in enumerate(words):
    if "-" in word:
        result += word.replace("-", "").capitalize()
    else:
        result += word
    if i != len(words) - 1:
        result += " "
print(result)