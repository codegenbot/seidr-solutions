Here is the Python code to solve the problem:

def camel_case(input_string):
    return ''.join(word.capitalize() if i > 0 else word for i, word in enumerate(map(str.title, input_string.split('-'))))

print(camel_case("nospaceordash")) 
print(camel_case("two-words"))
print(camel_case("two words"))
print(camel_case("all separate words"))