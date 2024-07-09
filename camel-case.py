def camel_case(s):
    return s[0].upper() + "".join(word.capitalize() if i > 0 else word.lower() for i, word in enumerate(s[1:].split("-")))