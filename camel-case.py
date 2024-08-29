def camel_case(input_str):
    return (
        "".join(word.capitalize() for word in input_str.replace("-", " ").split())
        if "-" in input_str
        else input_str
    )