```
def convert_to_camel_case(input_string):
    return ''.join(word.capitalize() for word in input_string.split('-'))

print(convert_to_camel_case("nospaceordash"))
print(convert_to_camel_case("two-words"))
print(convert_to_camel_case("two words"))
print(convert_to_camel_case("all separate words"))