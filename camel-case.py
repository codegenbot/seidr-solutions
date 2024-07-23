def camel_case(s):
    result = ""
    for word in s.split("-"):
        if not result:
            result = word
        else:
            result += word.capitalize()
    return result