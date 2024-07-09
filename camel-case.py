def camel_case(s):
    return (
        s[0].upper() + "".join(word.capitalize() for word in s.lstrip("-").split("-"))
        if s.startswith("-")
        else s.upper()
    )