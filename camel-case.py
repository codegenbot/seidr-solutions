def kebab_to_camel(s):
    return "".join(word.capitalize() for word in s.split("-")) if " " not in s else s


print(kebab_to_camel(input()))