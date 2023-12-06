```
def convert_to_camel_case(string):
    words = string.split("-")
    return "".join([word.capitalize() for word in words])

# test cases
print(convert_to_camel_case("camel-case")) # CamelCase
print(convert_to_camel_case("example-test-string")) # ExampleTestString
print(convert_to_camel_case("two-words")) # TwoWords
print(convert_to_camel_case("two words")) # Two Words
print(convert_to_camel_case("all separate words")) # All Separate Words
```