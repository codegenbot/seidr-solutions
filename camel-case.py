print("Please enter a string in kebab-case: ")
s = input()

def camel_case(s):
    words = s.split("-")
    result = "".join(word.capitalize() for word in words)
    return result[0].upper() + result[1:].lower()

print(camel_case(s))