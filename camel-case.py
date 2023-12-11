def camel_case(string):
    return "".join([word.title() for word in string.split("-")])

print(camel_case("camel-case example-test-string")) # Should print: "camelCase exampleTestString"
print(camel_case("nospaceordash")) # Should print: "nospaceordash"
print(camel_case("two-words")) # Should print: "twoWords"
print(camel_case("two words")) # Should print: "two words"
print(camel_case("all separate words")) # Should print: "all separate words"