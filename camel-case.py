```python
def camel_case(s):
    words = s.split('-')
    return ''.join(word.capitalize() for word in words[0].split()) + ''.join(word.capitalize() for word in words[1:])

print(camel_case(input()))