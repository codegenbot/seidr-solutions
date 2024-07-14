def camel_case(s):
    return "".join(
        word.capitalize() if i > 0 else word
        for i, word in enumerate(map(str.title, s.split("-")))
    )


print(camel_case(input()))