[PYTHON]
def get_camel_case(s):
    # Split the input string into words using "-" as the delimiter
    words = s.split("-")
    
    # Convert each word to camelCase and join them together with a space
    return " ".join([word.title() for word in words])
[/PYTHON]
[TESTS]
# Test case 1:
assert get_camel_case("camel-case") == "Camel Case"
# Test case 2:
assert get_camel_case("example-test-string") == "Example Test String"
# Test case 3:
assert get_camel_case("hello-world") == "Hello World"
[/TESTS]
