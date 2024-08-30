def kebab_to_camel(kebab_string):
    return " ".join(word.capitalize() for word in kebab_string.split("-"))