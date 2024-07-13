def kebab_to_camel(kebab_string):
    result = ""
    for word in kebab_string.split():
        if not result:
            result += word.capitalize()
        else:
            result += word.capitalize()
    return result