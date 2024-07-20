```python
def camel_case(s):
    return ' '.join(''.join(word.capitalize() if i > 0 else word.replace('-', '').strip().capitalize()) for word in s.split('-'))