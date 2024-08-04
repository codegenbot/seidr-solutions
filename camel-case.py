def camel_case(input_str):
    return input_str.replace("-", " ").replace(" ", lambda s: s.group(0).capitalize())


print(camel_case("nospaceordash"))
print(camel_case("two-words"))
print(camel_case("two words"))
print(camel_case("all separate words"))