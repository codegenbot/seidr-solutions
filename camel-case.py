def camel_case(s):
    s = s.replace("-", " ").replace(" ", "")
    return "".join(x.title() if i > 0 else x.capitalize() for i, x in enumerate(s))