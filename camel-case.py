def camel_case(string):
    words = string.split("-")
    return "".join([word.replace("-", "").title() for word in words])