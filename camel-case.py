print("Please enter a string in kebab-case: ")
s = input()
def camel_case(s):
    result = s[0].upper()
    for word in s[1:].replace('-', ' ').split():
        result += word.capitalize()
    return result
print(camel_case(s))