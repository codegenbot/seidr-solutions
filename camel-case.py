```
def camel_case(s):
    return "".join(word.capitalize() if i > 0 else word.lower().replace("-", "") for i, word in enumerate(s.split("-")))