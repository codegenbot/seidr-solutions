def camel_case(input_str):
    return ''.join(word.capitalize() for word in input_str.split("-")) if '-' in input_str else input_str

print(camel_case("camel-case example-test-string"))
print(camel_case("nospaceordash"))
print(camel_case("two-words"))
print(camel_case("two words"))
print(camel_case("all separate words"))