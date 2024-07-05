def camel_case(s):
    result = s.replace("-", " ").split()[0].lower()
    for word in s.replace("-", " ").split()[1:]:
        result += word.capitalize()
    return result