def camel_case(s):
    return "".join(
        word.capitalize() for word in s.split() if "-" not in word
    ) + "".join(
        word[0].upper() + word[1:].lower() for word in s.split("-") if len(word) > 1
    )