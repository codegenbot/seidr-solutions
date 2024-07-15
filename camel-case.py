```
def camel_case(s):
    return "".join(word.capitalize() if i > 0 and word else word.lower() for i, word in enumerate(" ".join(s.split("-"))))