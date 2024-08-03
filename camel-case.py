def convert_to_camel_case(input_string):
    result = input_string.title().replace("-", "")
    return (
        " ".join([result[:1]] + [word.capitalize() for word in result[1:].split(" ")])
        if " " in input_string
        else result
    )