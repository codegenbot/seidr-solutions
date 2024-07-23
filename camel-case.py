```
def camel_case(s):
    words = s.replace("-", " ").split()
    return "".join(word.capitalize() for i, word in enumerate(words))