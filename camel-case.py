def camel_case(s):
    return "".join(word.capitalize() for word in s.split() if "-" in word).replace(
        "-", ""
    ).strip().capitalize() + " ".join(
        word.title() for word in s.split() if "-" not in word
    )