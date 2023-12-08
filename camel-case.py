[PYTHON]
import re

def camel_case(string):
    return ' '.join([word.title() for word in re.split('-', string)])
[/PYTHON]
```

---

### Test cases

Here are some test cases to evaluate the correctness of the modified code:
```
assert camel_case("camel-case") == "CamelCase"
assert camel_case("example-test-string") == "ExampleTestString"
assert camel_case("nospaceordash") == "Nospaceordash"
assert camel_case("two-words") == "TwoWords"
assert camel_case("two words") == "Two Words"
assert camel_case("all separate words") == "All Separate Words"
```
These test cases check that the modified code can handle different types of input strings, including those with no dashes, with a single dash, and with multiple dashes. They also check that the code correctly converts each word to camelCase and joins them together with spaces as needed.