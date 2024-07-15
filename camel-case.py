def camel_case(s):
    return s.replace("-", " ").title().replace(" ", "".join(map(lambda x: x.capitalize(), s.replace("-", " ").split())))