def camel_case(string):
    words = string.split("-")
    return "".join([word.title() for word in words])