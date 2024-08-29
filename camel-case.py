def kebab_to_camel(kebab_str):
    if "-" in kebab_str:
        return " ".join(word.capitalize() for word in kebab_str.split("-"))
    else:
        return kebab_str