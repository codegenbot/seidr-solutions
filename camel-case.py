def camel_case(string):
    return "".join(word.capitalize() for word in string.split())