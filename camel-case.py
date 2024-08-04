def camel_case(input_str):
    return (
        "".join(word.capitalize() for word in input_str.replace("-", " ").split())
        if len(input_str) > 0
        else ""
    )


input_str = input()
print(camel_case(input_str))