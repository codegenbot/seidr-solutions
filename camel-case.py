[PYTHON]
def camel_case(string):
    words = string.split("-")
    return "".join([word.title() for word in words])
[/PYTHON]
[TESTS]
# Test case 1:
assert camel_case("camel-case example-test-string") == "camelCase exampleTestString"
# Test case 2:
assert camel_case("nospaceordash") == "nospaceordash"
# Test case 3:
assert camel_case("two-words") == "twoWords"
# Test case 4:
assert camel_case("two words") == "two words"
# Test case 5:
assert camel_case("all separate words") == "all separate words"
[/TESTS]
