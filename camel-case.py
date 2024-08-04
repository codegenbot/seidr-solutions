def kebab_to_camel(s):
    s = s.replace("-", " ").replace(" ", "")
    return "".join(word.capitalize() for word in s.split()) if s else ""


input_str = input()
print(kebab_to_camel(input_str))