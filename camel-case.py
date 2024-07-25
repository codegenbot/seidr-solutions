def kebab_to_camel(s):
    return (
        "".join(
            word.capitalize() if i > 0 else word[0].upper()
            for i, word in enumerate(s.split("-"))
        )
        .replace("-", " ")
        .strip()
    )


s = input()
print(kebab_to_camel(s))