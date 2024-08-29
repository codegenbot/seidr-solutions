def camel_case(s):
    return "".join(word.capitalize() for word in s.split("-")) + " ".join(s.split())


print(camel_case("camel-case example-test-string"))
print(camel_case("nospaceordash"))
print(camel_case("two-words"))
print(camel_case("two words"))
print(camel_case("all separate words"))