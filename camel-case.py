print("Please enter a string in kebab-case: ")
s = input()
def camel_case(s):
    return ''.join(word if i == 0 or not word else word.capitalize() for i, word in enumerate(s.replace('-', ' ').split()))
print(camel_case(s))