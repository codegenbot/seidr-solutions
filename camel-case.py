def camel_case(s):
    if len(s) == 0:
        return s[0].upper() + "".join(word.capitalize() for word in s.split()[1:])
    return s[0].upper() + "".join(word.capitalize() for word in s.split("-")[1:])