```Python
def camel_case(s):
    return "".join(word.capitalize() if i else word for i, word in zip((True,) * (len(s.split("-")) - 1), s.replace("-", " ").split(" "))))