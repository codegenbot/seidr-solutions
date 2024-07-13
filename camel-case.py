def camel_case(input_str):
    output_str = ""
    for word in input_str.split():
        if not output_str:
            output_str = word.capitalize()
        else:
            output_str += word.capitalize()
    return output_str