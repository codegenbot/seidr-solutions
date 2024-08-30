Here is the Python solution for the problem:

def kebab_to_camel(s):
    return ''.join(word.capitalize() if i > 0 else word for i, word in enumerate(s.replace('-', ' ').split()))

print(kebab_to_camel("camel-case example-test-string"))
print(kebab_to_camel("nospaceordash"))
print(kebab_to_camel("two-words"))
print(kebab_to_camel("two words"))
print(kebab_to_camel("all separate words"))