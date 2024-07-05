def camel_case(s):
    words = s.replace("-", " ").split()
    result = words[0].capitalize()
    for word in words[1:]:
        result += word.capitalize()
    return result