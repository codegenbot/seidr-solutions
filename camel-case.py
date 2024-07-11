```
def camel_case(input_str):
    words = input_str.split('-')
    return "".join(word.capitalize() if i > 0 else word.lower() for i, word in enumerate(words))