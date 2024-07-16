def camel_case(input_string):
    words = input_string.split('-')
    return "".join(word.capitalize() if i > 0 else word.title() for i, word in enumerate(words))