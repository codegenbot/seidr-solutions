def convert_kebab_to_camel(input_str):
    return "".join(word.capitalize() for word in input_str.split("-"))