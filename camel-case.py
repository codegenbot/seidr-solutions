def camel_case(s):
    s = s.strip('-').replace('-', ' ').split()
    return s[0].upper() + "".join(word.capitalize() for word in s[1:])