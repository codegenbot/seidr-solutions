def camel_case(s):
    words = s.replace("-", " ").split()
    result = ''
    for word in words:
        if not result:
            result = word.lower()
        else:
            result += word.capitalize()
    return result