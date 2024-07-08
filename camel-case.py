def camel_case(s):
    return "".join(
        word.capitalize() if i > 0 else word.lower().strip("-").split()[0]
        for i, word in enumerate(s.replace("-", " ").split())
    )