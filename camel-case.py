```
def kebab_to_camel(input_str):
    return ' '.join(word.capitalize() for word in input_str.split())

print(kebab_to_camel("camel-case example-test-string"))  # "camelCase exampleTestString"
print(kebab_to_camel("nospaceordash"))  # "nospaceordash"
print(kebab_to_camel("two-words"))  # "twoWords"
print(kebab_to_camel("two words"))  # "two words"
print(kebab_to_camel("all separate words"))  # "all separate words"