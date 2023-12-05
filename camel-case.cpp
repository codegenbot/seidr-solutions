[PYTHON]
def get_camel_case(kebab_case):
    words = kebab_case.split("-")
    return "".join([word.title() for word in words])
[/PYTHON]
[TESTS]
# Test case 1:
assert get_camel_case("") == ""
# Test case 2:
assert get_camel_case("hello") == "Hello"
# Test case 3:
assert get_camel_case("hello-world") == "HelloWorld"
[/TESTS]
