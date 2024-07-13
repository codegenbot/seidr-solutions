```
def camel_case(s):
    return (
        "".join(word.capitalize() for word in s.split())
        if "-" not in s
        else " ".join(part.title() if i > 0 else part.lower() for i,part in enumerate(s.split("-")))
    )