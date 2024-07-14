Here is the Python code for this problem:

```
def kebab_to_camel(s):
    return ''.join(word.capitalize() for word in s.split('-')) if ' ' not in s else s

print(kebab_to_camel("nospaceordash")) 
print(kebab_to_camel("two-words")) 
print(kebab_to_camel("two words")) 
print(kebab_to_camel("all separate words"))