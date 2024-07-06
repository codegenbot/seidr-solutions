```python
def camel_case(s):
    if '-' in s:
        words = s.split('-')
        return ''.join(word.capitalize() for word in words) + s[s.index('-') + 1:].replace('-', '').capitalize()
    else:
        return ''.join(word.capitalize() for word in s.split(' '))

print(camel_case("camel-case example-test-string")) 
print(camel_case("two-words"))       
print(camel_case("two words"))       
print(camel_case("all separate words"))