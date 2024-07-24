def kebab_to_camel(s):
    return (
        "".join(word.capitalize() for word in s.split())
        if "-" not in s
        else " ".join([s[0]] + [word.title() for word in s[1:].split("-")])
    )