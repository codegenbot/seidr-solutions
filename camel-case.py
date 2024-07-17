def camel_case(s):
    return "".join(
        word.capitalize() for word in s.split() if not word.startswith("-")
    ) + "".join(
        i[1:].capitalize() if i else "" for i in s.split("-") if i.startswith("-")
    )


s = input()
print(camel_case(s))