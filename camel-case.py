def kebab_to_camel(s):
    return (
        "".join(word.capitalize() for word in s.split())
        if "-" not in s
        else " ".join([kebab_to_camel(i.strip("-")) for i in s.split("-")])
    )


print(kebab_to_camel(input()))