def camel_case(input_str):
    return "".join(word.capitalize() if i > 0 else word for i, word in enumerate(input_str.replace("-", " ").split()))