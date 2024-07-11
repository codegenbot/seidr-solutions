def camel_case(input_str):
    return "".join(word.title() if i > 0 else word for i, word in enumerate(input_str.replace("-", " ").split(), 1))