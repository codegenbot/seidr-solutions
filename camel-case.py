def camel_case(s):
    s = s[0].upper() + "".join(word.capitalize() for word in s.split("-")[1:])
    return s.replace('-', '').replace(' ', '')