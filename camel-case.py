[PYTHON]
import re

def camel_case(string):
    # Split the input string on spaces and hyphens
    words = re.split(r"[\s-]+", string)

    # Title case each word
    words = [word.title() for word in words]

    # Join the words into a single string
    return "".join(words)
[/PYTHON]
[TESTS]
# Test case 1:
assert camel_case("") == ""
# Test case 2:
assert camel_case("camel-case") == "CamelCase"
# Test case 3:
assert camel_case("example-test-string") == "ExampleTestString"
[/TESTS]
