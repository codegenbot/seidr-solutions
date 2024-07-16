````
def camel_case(input_string):
    words = input_string.split('-')
    output_string = words[0].capitalize()
    for word in words[1:]:
        output_string += word.capitalize()
    return output_string.replace('-', ' ')