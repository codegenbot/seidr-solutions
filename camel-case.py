def camel_case(s):
    return "".join(word.capitalize() if i > 0 else word for i, word in enumerate(s.replace("-", " ").split()) if word).capitalize()

print(camel_case(input()))