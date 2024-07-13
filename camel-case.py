def camel_case(s):
    s = s.replace("-", "")
    return "".join(word.capitalize() if i > 0 else word for word in s.split())