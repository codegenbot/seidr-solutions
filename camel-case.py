```
def camel_case(s):
    s = s.replace("-", " ").replace(" ", "")
    return "".join(x.title() for x in s.split())