[PYTHON]
import re
def camel_case(string):
    words = re.split(r"[^\w-]+", string)
    return "".join([word.title() for word in words])
[/PYTHON]
[TESTS]
# Test case 1:
assert camel_case("hello-world") == "HelloWorld"
# Test case 2:
assert camel_case("camel-case-example") == "CamelCaseExample"
# Test case 3:
assert camel_case("hello-world-123") == "HelloWorld123"
[/TESTS]
