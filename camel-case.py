def kebab_to_camel(kebab):
    return " ".join(word.capitalize() for word in kebab.split("-"))