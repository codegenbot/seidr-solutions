def camel_case(input_string):
    return "".join(
        word.capitalize() if idx > 0 else word
        for idx, word in enumerate(input_string.replace("-", " ").split())
    )


input_str = input()
print(camel_case(input_str))