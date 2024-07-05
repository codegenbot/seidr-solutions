def camel_case(s):
    words = s.replace("-", " ").split()
    return "".join(word.capitalize() if i > 0 and not word.startswith(" ") else word.lower() for i, word in enumerate(words)).replace(" ", "")