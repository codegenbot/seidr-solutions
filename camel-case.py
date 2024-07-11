def camel_case(input_string):
    if " " in input_string:
        return "".join(word.capitalize() for word in input_string.split(" "))
    else:
        return input_string[0].upper() + input_string[1:].replace("-", "")