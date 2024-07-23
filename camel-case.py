def camel_case(s):
    return "".join((word[0].upper() + word[1:].lower()) if i > 1 else word.capitalize() for i, word in enumerate(s.replace("-", " ").split(), 1))