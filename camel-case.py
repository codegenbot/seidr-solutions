"""
def camel_case(input_str):
    words = input_str.split('-')
    output_str = words[0].capitalize()
    for word in words[1:]:
        output_str += word.capitalize()
    return output_str
"""