```
def camel_case(s):
    s = s.replace "-", " "
    return "".join(word.capitalize() for word in s.split())