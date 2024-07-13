def kebab_to_camel(s):
    return "".join(
        word.capitalize() if i > 0 else word
        for i, word in enumerate(s.replace("-", " ").split())
    )