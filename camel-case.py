def camel_case(input_str):
    return "".join(
        word.capitalize() for word in input_str.split() if "-" in word
    ).replace("-", " ").replace(" ", "").capitalize() + "".join(
        word.title() for word in input_str.split() if "-" not in word
    )


print(camel_case(input("Enter a string: ")))