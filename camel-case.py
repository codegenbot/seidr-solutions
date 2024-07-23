def camel_case(s):
    s = s.replace("-", " ")
    return "".join(
        word.capitalize() if i == 0 or s[i - 1] != " " else word[0].upper() + word[1:]
        for i, word in enumerate(s.split())
    )