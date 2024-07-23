def camel_case(s):
    s = s.replace("-", " ").split()
    return "".join(word.capitalize() for word in s)