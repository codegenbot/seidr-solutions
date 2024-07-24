def camel_case(s):
    return (
        "".join(word.capitalize() for word in s.split(" "))
        if "-" not in s
        else " ".join(word.capitalize() for word in s.split("-"))
    )


s = input()
print(camel_case(s))