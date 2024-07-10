def camel_case(s):
    return "".join(
        word.capitalize() if i > 0 else word for i, word in enumerate(s.split("-"))
    )


s = input()
print(camel_case(s))