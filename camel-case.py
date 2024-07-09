def camel_case(s):
    return (
        s[0].upper() + "".join(word.capitalize() for word in s.split("-")[1:]).
        title() if " " in s
        else s.upper()
    )