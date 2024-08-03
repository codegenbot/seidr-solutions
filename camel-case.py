def kebab_to_camel(s):
    s = s.replace("-", " ")
    return "".join(word.capitalize() for word in s.split()) if " " in s else s