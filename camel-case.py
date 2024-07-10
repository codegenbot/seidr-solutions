def camel_case(s):
    words = s.replace("-", " ").split()
    return "".join(word[0].lower() + word[1:].capitalize() if i > 0 else word for i, word in enumerate(words))