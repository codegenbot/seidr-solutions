def kebab_to_camel(s):
    return (
        "".join(word.capitalize() for word in s.replace("-", " ").split()) if s else ""
    )


print(kebab_to_camel(input()))