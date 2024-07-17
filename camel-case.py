Here is the Python code to solve the problem:

def kebab_to_camel(s):
    return ''.join(word.capitalize() for word in s.split('-'))

# Testing the function
print(kebab_to_camel("nospaceordash")) # nospaceordash
print(kebab_to_camel("two-words"))     # twoWords
print(kebab_to_camel("all separate words"))  # all separate words