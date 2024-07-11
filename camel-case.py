def camel_case(input_str):
    output = ""
    for word in input_str.replace("-", " ").split():
        if not output:
            output += word
        else:
            output += word.capitalize()
    return output