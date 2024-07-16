def convert_to_camel_case(input_string):
    result = ""
    for word in input_string.split():
        if not result:
            result += word.capitalize()
        else:
            result += word.capitalize().replace("-", "")
    return result