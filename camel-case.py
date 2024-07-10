def camel_case(input_string):
    return (
        "".join(word.capitalize() for word in input_string.split())
        if "-" not in input_string
        else " ".join(word.title() for word in input_string.split("-"))
    )