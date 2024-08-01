def camel_case(s):
    return (
        "".join(word.capitalize() for word in s.split(" "))
        if s.count("-") == 0
        else " ".join(word.title() for word in s.split("-"))
    )