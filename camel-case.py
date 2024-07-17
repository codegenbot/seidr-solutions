def camel_case(s):
    return (
        "".join(word.capitalize() for word in s.split() if "-" not in word)
        .replace("-", " ")
        .strip()
        .title()
    )