def camel_case(input_str):
    return "".join(word.title() for word in input_str.replace("-", " ").split())