print("Please enter a string in kebab-case: ")
s = input().replace(" ", "")

def camel_case(s):
    words = s.split("-")
    return ''.join(word.capitalize() if i > 0 else word for i, word in enumerate(words))

print(camel_case(s))