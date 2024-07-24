words = input().split()
result = ""
for i, word in enumerate(words):
    if "-" in word:
        parts = word.split("-")
        camel_word = parts[0] + "".join(x.title() for x in parts[1:])
        result += camel_word
    else:
        result += word
    if i != len(words) - 1:
        result += " "
print(result)