```
def camel_case(input_str):
    return ''.join(word.capitalize() for word in input_str.replace('-', ' ').split()) if len(input_str) > 0 else ''

print(camel_case("nospaceordash"))
print(camel_case("two-words"))
print(camel_case("two words"))
print(camel_case("all separate words"))