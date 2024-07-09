def camel_case(s):
    result = s.replace("-", " ").capitalize()
    return result[0] + result[1:].replace(" ", "").capitalize()