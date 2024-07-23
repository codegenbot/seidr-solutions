```python
def camel_case(s):
    words = s.split('-')
    return ''.join(word.capitalize() for word in words[0] + ''.join(x.title() for x in words[1:]))

print(camel_case(input()))