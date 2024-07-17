def camel_case(s):
    return (
        "".join(word.capitalize() for word in s.split())
        if "-" not in s
        else " ".join(
            [s[: s.index("-")].capitalize()]
            + [word.capitalize() for word in s[s.index("-") + 1 :].split("-")]
        )
    )