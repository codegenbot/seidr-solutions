[PYTHON]
def get_camel_case(my_string):
    # Split the string into words using "-" as the delimiter
    words = my_string.split("-")

    # Convert each word to camelCase and join them together with a space
    return " ".join([word.title() for word in words])
[/PYTHON]
[TESTS]
# Test case 1:
assert get_camel_case("hello-world") == "Hello World"
# Test case 2:
assert get_camel_case("camel-case-example") == "Camel Case Example"
# Test case 3:
assert get_camel_case("this-is-a-test") == "This Is A Test"
[/TESTS]
