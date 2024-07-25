```
def camel_case(s):
    return "".join(word.capitalize() for group in s.split("-") for word in group.split())