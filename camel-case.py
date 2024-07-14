def kebab_to_camel(s):
    return "".join(word.capitalize() for word in s.split("-")) + " ".join(
        map(str.title, s.split()[1:])
    )