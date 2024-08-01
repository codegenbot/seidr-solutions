def camel_case(input_string):
    return (
        "".join(word.capitalize() for word in input_string.split())
        if " " in input_string
        else input_string.replace("-", "").capitalize()
    )