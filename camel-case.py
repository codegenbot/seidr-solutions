def convert_kebab_to_camel(s):
    return (
        "".join(word.capitalize() for word in s.split(" "))
        if "-" not in s
        else " ".join([word.title() for word in s.split("-")])
    )


s = input()
print(convert_kebab_to_camel(s))