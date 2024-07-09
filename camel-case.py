def camel_case(s):
    result = s[0].upper()
    for word in s.split("-")[1:]:
        result += word.capitalize()
    return result