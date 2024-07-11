def camel_case(input_str):
    words = input_str.replace("-", " ").split()
    return "".join(word.title() if i > 0 else word.lower() for i, word in enumerate(words))