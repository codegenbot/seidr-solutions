def camel_case(input_str):
    return (
        "".join(word.capitalize() for word in input_str.split())
        if "-" not in input_str
        else " ".join(
            "".join(
                word.capitalize() if i > 0 else word.lower()
                for word in input_str.split("-")
            )
            for i in range(len(input_str.split("-")))
        ).replace("-", " ")
    )