def camel_case(input_string):
    parts = input_string.replace("-", " ").split()
    return "".join(part.capitalize() if i > 0 else part for i, part in enumerate(parts))