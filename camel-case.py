```
def camel_case(s):
    parts = s.split("-")
    return "".join(word.capitalize() for word in parts)