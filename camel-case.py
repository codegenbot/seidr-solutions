words = input().split()
result = ""
for i, word in enumerate(words):
    if i == 0:
        result += word
    else:
        result += word.capitalize()
print(result)