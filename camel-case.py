s = input()
words = s.split()
camel_case = ""
for word in words:
    camel_case += word.capitalize()
print(camel_case)