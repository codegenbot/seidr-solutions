def camel_case(s):
    result = ""
    for word in s.split():
        if result:
            result += "".join(word.capitalize())
        else:
            result += word.lower()
    return result