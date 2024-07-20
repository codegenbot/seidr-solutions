print("Please enter a string in kebab-case: ")
s = input()

def camel_case(s):
    words = s.split("-")
    return ''.join(word.capitalize() for word in ' '.join(words)).replace(' ', '').lower().capitalize()

print(camel_case(s))