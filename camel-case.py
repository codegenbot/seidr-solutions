```
def camel_case(input_str):
    return ''.join(word.capitalize() for word in input_str.replace('-', ' ').split())

print(camel_case("nospaceordash"))
print(camel_case("two-words"))
print(camel_case("two words"))
print(camel_case("all separate words"))