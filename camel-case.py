def camel_case(s):
    return (
        "".join(word.capitalize() for word in s.split(" "))
        if "-" not in s
        else " ".join(word.title() for word in s.split("-"))
    )