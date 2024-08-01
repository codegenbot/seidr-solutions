def kebab_to_camel(s):
    return " ".join(
        word.capitalize() if idx > 0 else word.lower()
        for idx, word in enumerate(s.split("-"))
    )


print(kebab_to_camel("nospaceordash"))
print(kebab_to_camel("two-words"))
print(kebab_to_camel("two words"))
print(kebab_to_camel("all separate words"))