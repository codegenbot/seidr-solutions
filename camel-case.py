def camel_case(s):
    return (
        "".join(word.capitalize() for word in s.split())
        if "-" not in s
        else " ".join(word.lower().capitalize() if i > 0 else word.lower() for i, word in enumerate(s.split("-")))
    )