def kebab_to_camel(input_str):
    if "-" in input_str or " " in input_str:
        return "".join(
            word.capitalize() for word in input_str.replace("-", " ").split()
        )
    else:
        return input_str