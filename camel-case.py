print("Please enter a string in kebab-case: ")
s = input()

def camel_case(s):
    words = s.split("-")
    result = " ".join(word.capitalize() for word in words)
    return "".join(word[0].upper() + word[1:].lower() if i > 0 else word.lower() for i, word in enumerate(result.split()))

print(camel_case(s))