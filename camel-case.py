def camel_case(input_str):
    return "".join(
        word.capitalize() for word in (input_str.replace("-", " ") + " ").split() if "-" not in word
    ) + "".join(
        word[0].upper() + word[1:] for word in input_str.split("-") if len(word) > 1
    )