def camel_case(s):
    return "".join(
        word.capitalize() if idx > 0 else word
        for idx, word in enumerate(s.replace("-", " ").split())
    )