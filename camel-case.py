def camel_case(s):
    return "".join([word.capitalize() for word in s.split("-")])

# test cases
assert camel_case("camel-case") == "CamelCase"
assert camel_case("example-test-string") == "ExampleTestString"
assert camel_case("nospaceordash") == "Nospaceordash"
assert camel_case("two-words") == "TwoWords"
assert camel_case("two words") == "Two words"
assert camel_case("all separate words") == "All separate words"