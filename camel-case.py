def convert_to_camel_case(input_string):
    if "-" in input_string or " " in input_string:
        return "".join(
            word.capitalize() for word in input_string.replace("-", " ").split()
        )
    else:
        return input_string