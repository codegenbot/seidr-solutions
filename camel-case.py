print("Please enter a string in kebab-case: ")
s = input()

def camel_case(s):
    words = s.split("-")
    return ''.join(word.capitalize() for word in words[0] + [word.capitalize() for word in words[1:]]).replace("-", "").lower().capitalize()

print(camel_case(s))