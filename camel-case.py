Here is the Python solution for the problem:

def camel_case(string):
    return ''.join(word.capitalize() if i > 0 else word for i, word in enumerate(string.split('-')))

print(camel_case("nospaceordash")) 
print(camel_case("two-words"))
print(camel_case("two words"))
print(camel_case("all separate words"))