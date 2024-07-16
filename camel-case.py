def camel_case(input_string):
    return "".join(
        word.capitalize() if i > 0 else word[0].upper() + word[1:].lower()
        for i, word in enumerate(input_string.replace("-", " ").split())
    )