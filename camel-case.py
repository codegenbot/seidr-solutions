def camel_case(s):
    words = s.replace("-", " ").split()
    return "".join(word.title() if i > 0 else word for i, word in enumerate(words))