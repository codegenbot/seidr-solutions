def camel_case(input_str):
    return (
        "".join(word.capitalize() for word in input_str.split())
        if " " in input_str
        else input_str.title()
    )


input_str = input()
print(camel_case(input_str))