```python
def camel_case(s):
    words = s.split('-')
    result = ''
    for word in words:
        if len(result) > 0:
            result += word.capitalize()
        else:
            result += word
    print(result)