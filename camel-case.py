def camel_case(s):
    if s[0].islower():
        return s.lower()
    return s[0].upper() + "".join(word.capitalize() for word in s.split("-")[1:])