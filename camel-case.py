```
def """ 
    Take a string in kebab-case and convert all of the words to camelCase.
    Each group of words to convert is delimited by "-", and each grouping is separated by a space.
    For example: "camel-case example-test-string"-> "camelCase exampleTestString".
"""
    words = s.replace("-", " ").split()
    return "".join(word.capitalize() if i > 0 else word.lower() for i, word in enumerate(words)).replace(" ", "")

print(camel_case("nospaceordash"))
print(camel_case("two-words"))
print(camel_case("two words"))
print(camel_case("all separate words"))