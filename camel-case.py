def camel_case(s):
    s = s.replace("-", " ").split()
    result = s[0].title() if s else ""
    for word in s[1:]:
        result += word.title()
    return result