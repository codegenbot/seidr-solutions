def camel_case():
    s = input()
    return (
        "".join(word.capitalize() for word in s.split())
        if "-" not in s
        else " ".join(word.title() for word in s.split("-"))
    )


print(camel_case())