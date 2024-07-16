def convert_to_camel_case(input_string):
    result = ""
    for word in input_string.split():
        if not result or not result[0].islower():
            result += word.capitalize()
        else:
            result += word[1:].capitalize().replace("-", "")