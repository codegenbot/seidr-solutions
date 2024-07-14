```
def camel_case(s):
    return ''.join(word.capitalize() for word in s.split()) if '-' not in s else ' '.join(word.title() for word in s.split('-'))

# Testing the function
print(camel_case("nospaceordash"))  # nospaceordash
print(camel_case("two-words"))      # twoWords
print(camel_case("two words"))      # two words
print(camel_case("all separate words"))  # all separate words