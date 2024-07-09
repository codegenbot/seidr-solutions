def camel_case(s):
    s = s.replace("-", " ")
    words = s.split()
    return "".join(word.capitalize() if i > 0 else word.lower() for i, word in enumerate(words))