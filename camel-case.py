```
def camel_case(s):
    return "".join(word.capitalize() if i > 0 else word.title()
                   for i, word in enumerate(filter(None, s.split("-")), 1))