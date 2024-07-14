def camel_case(input_string):
    return (
        " ".join(word.capitalize() for word in input_string.split())
        if "-" not in input_string
        else "".join(
            word[0].upper() + word[1:].lower() if i > 0 else word.capitalize()
            for i, word in enumerate(input_string.replace("-", " ").split())
        )
    )