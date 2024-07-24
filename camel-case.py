def convert_to_camel_case(input_string):
    if "-" in input_string or " " in input_string:
        words = input_string.replace("-", " ").split()
        return "".join(word.capitalize() for word in words)
    else:
        return input_string