```Python
def camel_case(s):
    words = s.replace("-", " ").split()
    return "".join(word.capitalize() if i > 0 else word.lower() for i, word in enumerate(words)).replace(" ", "")

print(camel_case("nospaceordash"))
print(camel_case("two-words"))
print(camel_case("two words"))
print(camel_case("all separate words"))