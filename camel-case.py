def convert_to_camel_case(string):
    words = string.split("-")
    return "".join([word.capitalize() for word in words])