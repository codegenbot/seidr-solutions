print("Please enter a string in kebab-case: ")
s = input()
def camel_case(s):
    return ''.join(word.capitalize() if i > 0 else word for i, word in enumerate(s.replace('-', ' ').split()))
print(camel_case(s))