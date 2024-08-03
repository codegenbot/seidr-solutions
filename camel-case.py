def camel_case(input_string):
    return input_string.replace("-", " ").replace(" ", "".join(word.capitalize() for word in input_string.split())).capitalize()