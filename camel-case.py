def camel_case(s):
    return "".join([word.capitalize() for word in s.split("-")])

# test cases
print(camel_case("camel-case")) # should print "CamelCase"
print(camel_case("example-test-string")) # should print "ExampleTestString"
print(camel_case("two-words")) # should print "TwoWords"
print(camel_case("two words")) # should print "Two words"
print(camel_case("all separate words")) # should print "All separate words"