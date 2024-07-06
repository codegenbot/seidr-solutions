```python
def camel_case(s):
    if ' ' in s:
        return ''.join(word.capitalize() for word in s.split(' '))
    else:
        return s.replace('-', '').capitalize()

print(camel_case("nospaceordash"))  # nospaceordash
print(camel_case("two-words"))       # twoWords
print(camel_case("two words"))       # two words
print(camel_case("all separate words"))  # all separate words