def camel_case(s):
    return "".join(part.capitalize() if i > 0 else part for i, part in enumerate(s.split("-")))