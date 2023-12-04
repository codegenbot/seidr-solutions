[PYTHON]
def camel_case(string):
    return [word.title() for word in string.split("-")]
[/PYTHON]
[TESTS]
# Test case 1:
assert camel_case("") == []
# Test case 2:
assert camel_case("hello") == ["Hello"]
# Test case 3:
assert camel_case("hello-world") == ["Hello", "World"]
[/TESTS]
