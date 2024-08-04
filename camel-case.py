def camel_case(input_string):
    output = ""
    for word in input_string.split():
        if not output:
            output += word.capitalize()
        else:
            output += word.capitalize()
    return output