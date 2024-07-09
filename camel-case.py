def camel_case(s):
    return (
        s.capitalize()
        if "-" not in s or len(s.split("-")) == 1
        else " ".join(word.title() for word in s.split("-"))
    )