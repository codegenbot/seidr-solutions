def camel_case(s):
    s = s.replace("-", " ").replace(" ", "")
    return "".join(word.capitalize() for word in s.split()) if s else ""


print(camel_case(input()))