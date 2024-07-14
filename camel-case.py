def camel_case(input_string):
    return "".join(
        word.capitalize() if i > 0 else word
        for i, word in enumerate(input_string.replace("-", " ").split())
    )


print(camel_case("nospaceordash"))
print(camel_case("two-words"))
print(camel_case("two words"))
print(camel_case("all separate words"))