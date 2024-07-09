Here is the Python code to solve the problem:

def kebab_to_camel(s):
    return ''.join(word.capitalize() for word in s.split('-')) + ' '

print(kebab_to_camel("camel-case example-test-string"))
print(kebab_to_camel("nospaceordash"))
print(kebab_to_camel("two-words"))
print(kebab_to_camel("two words"))
print(kebab_to_camel("all separate words"))