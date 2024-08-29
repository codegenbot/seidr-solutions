def kebab_to_camel(kebab_string):
    return "".join(
        word.capitalize() if i > 0 else word
        for i, word in enumerate(kebab_string.replace("-", " ").split())
    )