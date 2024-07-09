def camel_case(s):
    return (
        s[0].upper() + "".join(word.capitalize() for word in s[1:].split())
        if " " in s
        else s.upper()
    )