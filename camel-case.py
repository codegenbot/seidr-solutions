def camel_case(s):
    return (
        s[0].upper() + "".join(word.capitalize() for word in s[1:].split())
        if " " in s
        else (s if len(s) == 1 or s.isupper() else s[0].upper() + s[1:].lower())
    )