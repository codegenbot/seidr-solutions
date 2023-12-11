def convert_to_camel_case(text):
    return " ".join([word.title() for word in text.split("-")])

# test cases
assert convert_to_camel_case("camel-case example-test-string") == "camelCase exampleTestString"
assert convert_to_camel_case("nospaceordash") == "nospaceordash"
assert convert_to_camel_case("two-words") == "twoWords"
assert convert_to_camel_case("two words") == "two words"
assert convert_to_camel_case("all separate words") == "all separate words"