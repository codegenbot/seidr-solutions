
[PYTHON]
import re

def camel_case(string):
    return "".join([word.capitalize() for word in re.split("-", string)])
[/PYTHON]

[TESTS]
# Test case 1:
assert camel_case("") == ""
# Test case 2:
assert camel_case("camel-case") == "CamelCase"
# Test case 3:
assert camel_case("example-test-string") == "ExampleTestString"
[/TESTS]
