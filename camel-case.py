def camel_case(string):
    return (
        "".join(word.capitalize() for word in string.split())
        if "-" in string
        else string
    )


print(camel_case("nospaceordash"))
print(camel_case("two-words"))
print(camel_case("two words"))
print(camel_case("all separate words"))