```
def camel_case(s):
    s = s.replace("-", " ").title().replace(" ", '')
    return s