def camel_case(input_string):
    return input_string.replace("-", " ").replace(" ", lambda x: x.group().capitalize())