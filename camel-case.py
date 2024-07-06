```python
def camel_case(s):
    if '-' in s:
        return ''.join(word.capitalize() for word in s.split('-')) if ' ' in s else s.replace('-', '').capitalize()
    else:
        return s

print(camel_case("nospaceordash"))  # nospaceordash
print(camel_case("two-words"))       # twoWords
print(camel_case("two words"))       # two words
print(camel_case("all separate words"))  # all separate words