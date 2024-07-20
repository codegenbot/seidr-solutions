print("Please enter a string in kebab-case: ")
s = input()


def camel_case(s):
    words = s.split("-")
    return (
        "".join(
            word.capitalize() if i == 0 else word.title()
            for i, word in enumerate(words)
        )
        .lower()
        .capitalize()
    )


print(camel_case(s))