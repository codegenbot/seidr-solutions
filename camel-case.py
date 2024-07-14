def camel_case(s):
    s = s.replace("-", " ").replace(" ", "")
    return s[0].upper() + s[1:].title()