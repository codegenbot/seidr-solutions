```
def camel_case(s):
    return "".join(word.capitalize() if i else word.lower() for i, word in enumerate(s.replace("-", " ").split()))