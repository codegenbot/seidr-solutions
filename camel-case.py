def camel_case(input_str):
    return " ".join(group.capitalize() for group in input_str.split("-"))