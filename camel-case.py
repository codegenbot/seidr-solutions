def camel_case(s):
    if len(s) == 1:
        return s.upper()
    return s[0].upper() + "".join(word.lower().capitalize() for word in s.split("-")[1:])