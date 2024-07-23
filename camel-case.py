def camel_case(s):
    words = s.replace("-", " ").split()
    result = ""
    for word in words:
        if result:
            result += word.capitalize()
        else:
            result += word.lower()
    return result