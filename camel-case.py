def to_camel_case(text):
    text = text.replace("-", " ").replace(" ", "")
    words = text.split()
    return "".join(word.capitalize() for word in words)


text = input()
print(to_camel_case(text))