def camel_case(s):
    return s[0].upper() + "".join(
        word.capitalize() if i else word for i, word in enumerate(s.split("-")[1:])
    )