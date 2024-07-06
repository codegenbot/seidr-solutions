```
def camel_case(s):
    return "".join(word.capitalize() if i else word.replace "-", "".lower() for i, word in enumerate(s.split("-"))).lstrip('-')