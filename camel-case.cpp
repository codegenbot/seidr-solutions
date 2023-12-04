[PYTHON]
import re
def camel_case(string):
    # Split the input string into words using "-" as the delimiter
    words = re.split(r"[-]+", string)
    
    # Convert each word to camelCase and join them together with a space
    return " ".join([word.title() for word in words])
[/PYTHON]
[TESTS]
# Test case 1:
assert camel_case("") == ""
# Test case 2:
assert camel_case("camel-case") == "CamelCase"
# Test case 3:
assert camel_case("example-test-string") == "ExampleTestString"
[/TESTS]
