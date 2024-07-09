def camel_case(s):
    return (
        "".join(word.capitalize() for word in s.split(" "))
        if s.count("-") == 0
        else s.replace("-", " ").split(" ")[0].capitalize()
        + "".join(word.capitalize() for word in s.split(" ")[1:])
    )


s = input()
print(camel_case(s))