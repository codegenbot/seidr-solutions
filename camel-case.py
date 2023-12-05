def camel_case(string):
    return "".join([word.lower().capitalize() for word in string.split("-") if word != ""])