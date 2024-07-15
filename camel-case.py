def camel_case(s):
    result = s[0:1].upper()
    for word in s[1:].split("-"):
        result += ''.join(x.title() for x in word)
    return result