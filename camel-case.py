def camel_case(s):
    return ' '.join(word.capitalize() if i > 0 else word for i, word in enumerate(s.split('-')))

print(camel_case("nospaceordash"))
print(camel_case("two-words"))
print(camel_case("two words"))
print(camel_case("all separate words"))