def convert_to_camel_case(string):
    words = string.split("-")
    return "".join([word.title() for word in words])

# test cases
print(convert_to_camel_case("camel-case")) # camelCase
print(convert_to_camel_case("example-test-string")) # exampleTestString
print(convert_to_camel_case("two-words")) # twoWords
print(convert_to_camel_case("two words")) # two words
print(convert_to_camel_case("all separate words")) # all separate words