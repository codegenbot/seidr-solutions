Here is the Python solution:

def kebab_to_camel(s):
    return ''.join(word.capitalize() for word in s.split()) if ' ' in s else s.capitalize()

print(kebab_to_camel("camel-case example-test-string")) 
print(kebab_to_camel("nospaceordash"))
print(kebab_to_camel("two-words"))
print(kebab_to_camel("two words"))
print(kebab_to_camel("all separate words"))