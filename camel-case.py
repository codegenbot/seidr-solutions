def camel_case(s):
    result = s[0].lower()
    for word in s[1:].replace("-", " ").split():
        result += word.capitalize()
    return result