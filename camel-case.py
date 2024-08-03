```
def camel_case(input_str):
    return ''.join(word.capitalize() for word in input_str.replace('-', ' ').split())

print(camel_case("camel-case example-test-string")) # "camelCase exampleTestString"
print(camel_case("nospaceordash")) # "nospaceordash"
print(camel_case("two-words")) # "twoWords"
print(camel_case("two words")) # "two words"
print(camel_case("all separate words")) # "all separate words"