```
def camel_case(s):
    return (
        "".join(word.capitalize() for word in s.split())
        if "-" not in s
        else " ".join(part.strip("-").capitalize() for part in s.split("-"))
    )