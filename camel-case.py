def camel_case(string):
    words = string.split("-")
    return "".join([word.title() for word in words])

# tests
assert camel_case("camel-case example-test-string") == "camelCase exampleTestString"
assert camel_case("nospaceordash") == "nospaceordash"
assert camel_case("two-words") == "twoWords"
assert camel_case("two words") == "two words"
assert camel_case("all separate words") == "all separate words"