```python
def camel_case(s):
    words = s.split('-')
    result = words[0].lower()
    for word in words[1:]:
        result += word.capitalize()
    return result

print(camel_case(input()))