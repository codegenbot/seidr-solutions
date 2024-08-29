def camel_case(s):
    result = s.title().replace("-", "")
    return " ".join(
        [result[:1]] + [word.capitalize() for word in result[1:].split(" ")]
    )