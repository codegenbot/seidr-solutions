def camel_case(s):
    return s.split("-")[0].lower() + "".join(word.capitalize() for word in s.split("-")[1:])