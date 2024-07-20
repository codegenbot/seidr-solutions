```
print("Please enter a string in kebab-case: ")
s = input()
def camel_case(s):
    result = s[0].upper()
    words = s[1:].replace('-', ' ').split()
    for i, word in enumerate(words):
        if i > 0:
            result += word.capitalize()
        else:
            result += word
    return result
print(camel_case(s))