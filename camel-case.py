def kebab_to_camel(kebab_case_str):
    return " ".join(word.capitalize() for word in kebab_case_str.split())