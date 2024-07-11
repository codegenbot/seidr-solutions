```
def camel_case(input_string):
    words = input_string.replace('-', ' ').split()
    return words[0].lower() + ''.join(word.capitalize() for word in words[1:])