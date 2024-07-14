def convert_to_camel_case(input_string):
    return (
        "".join(word.capitalize() for word in input_string.split())
        if len(input_string) > 0
        else ""
    )