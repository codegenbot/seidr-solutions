def camel_case(s):
    return (
        "".join(word.capitalize() for word in s.split())
        if "-" not in s
        else " ".join(
            (
                s[: s.index("-")] + s[: s.index("-")].capitalize(),
                *map(lambda x: x.capitalize(), s[s.index("-") + 1 :].split("-")),
            )
        )
    )


input_string = input()
print(camel_case(input_string))