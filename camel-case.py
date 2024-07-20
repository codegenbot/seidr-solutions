print("Please enter a string in kebab-case: ")
s = input()
def camel_case(s):
    words = s.replace('-', ' ').split()
    return ''.join(word.capitalize() for i, word in enumerate(words) if i > 0) + words[0].lower()

print(camel_case(s))