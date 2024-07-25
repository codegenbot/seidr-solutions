def convert_to_camel_case(s):
    return " ".join(word.capitalize() for word in s.split()) if " " in s else s.title()