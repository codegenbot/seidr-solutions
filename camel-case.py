```
def camel_case(input_string):
    words = input_string.split('-')
    return ''.join(word.capitalize() if i > 0 else word[0].lower() + word[1:] for i, word in enumerate(words))