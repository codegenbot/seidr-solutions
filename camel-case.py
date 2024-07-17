def camel_case(input_string):
    output = input_string.capitalize()
    for char in "- ":
        output = output.replace(char, "")
    return output