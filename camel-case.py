def kebab_to_camel(s):
    return (
        "".join(word.capitalize() for word in s.replace("-", " ").split())
        + "".join(word[0].upper() + word[1:].lower() for word in s.split()[1:])
        if " " not in s
        else s
    )