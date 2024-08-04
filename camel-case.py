def camel_case(s):
    return "".join(word.capitalize() for word in s.split() if "-" in word).replace(
        "-", " "
    ).replace(" ", "") + "".join(
        word.capitalize() for word in s.replace("-", " ").split()
    )


s = input()
print(camel_case(s))