def camel_case(s):
    return "".join([w.title() for w in s.split("-")])
