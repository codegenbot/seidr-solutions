```python
def camel_case(s):
    return ''.join(word.capitalize() if i > 0 else word[0].lower() + word[1:].upper() for i, word in enumerate(s.replace('-', ' ').split()))