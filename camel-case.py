```
def camel_case(s):
    return "".join(x.title() if i > 0 else x.lower() for i, x in enumerate(s.split("-")))