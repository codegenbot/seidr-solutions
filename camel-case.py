print("Please enter a string in kebab-case: ")
s = input()

def camel_case(s):
    words = s.split("-")
    result = " ".join(word.capitalize() for word in words)
    return result.replace(" ", "").swapcase()

print(camel_case(s))