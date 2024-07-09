def camel_case(s):
    if s[0] == "-":
        return "".join(word.capitalize() for word in s.split("-")[1:]).lower()
    elif len(s) == 1:
        return s.upper()
    else:
        return s[0].upper() + "".join(word.capitalize() for word in s.split("-")[1:])