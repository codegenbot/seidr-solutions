def camel_case(s):
    s = "-".join(word.capitalize() if i > 0 else word[0].upper() + word[1:] for i, word in enumerate(s.split("-")))
    return s