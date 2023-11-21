s = input()
words = s.split()
camelCase = ""
for word in words:
    camelCase += word.capitalize()
print(camelCase)