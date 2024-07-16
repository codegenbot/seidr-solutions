```
def camel_case(input_string):
    words = input_string.split("-")
    return "".join(word.capitalize() if i > 0 else words[0].lower() + "".join(word.capitalize() for word in words[1:]) for i, word in enumerate(words))