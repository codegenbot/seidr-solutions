def kebab_to_camel(s):
    return (
        "".join(word.capitalize() for word in s.split("-"))
        if " " not in s
        else " ".join((i[0].upper() + i[1:]) for i in s.split(" "))
    )