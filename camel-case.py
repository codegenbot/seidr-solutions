def camel_case(s):
    if not s or s.isupper():
        return s
    return s[0].upper() + "".join(word.capitalize() for word in s.split("-")[1:]).replace(" ", "")