```
def camel_case(input_string):
    return " ".join(word.capitalize() for word in input_string.split()) + ''.join(word.capitalize().replace('-', '') for word in input_string.split()[1:]).title()