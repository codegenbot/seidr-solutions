def camel_case(s):
    return "".join(word.capitalize() if i > 0 else (word.lower().capitalize(),)[0] for word in s.replace("-", " ").split()).replace(" ", "")