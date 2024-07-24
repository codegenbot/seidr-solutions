def camel_case(s):
    return (
        "".join(word.capitalize() for word in s.split(" "))
        if not "-" in s
        else s.replace("-", " ").split()[0]
        + "".join(word.capitalize() for word in s.replace("-", " ").split()[1:])
    )


s = input()
print(camel_case(s))