Here is the Python solution:

def camel_case(input_str):
    return ''.join(word.capitalize() if i > 0 else word for i, word in enumerate(input_str.replace('-', ' ').split()))

print(camel_case("nospaceordash")) 
print(camel_case("two-words"))
print(camel_case("two words"))
print(camel_case("all separate words"))