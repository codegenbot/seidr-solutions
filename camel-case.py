Here is the Python code to solve the problem:

def camel_case(input_string):
    return ''.join(word.capitalize() for word in input_string.split()) if ' ' in input_string else input_string.replace('-', '').capitalize()

print(camel_case("nospaceordash"))
print(camel_case("two-words"))
print(camel_case("two words"))
print(camel_case("all separate words"))