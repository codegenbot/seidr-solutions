```python
def camel_case(input_str):
    words = input_str.split('-')
    result = words[0].capitalize()
    for word in words[1:]:
        result += word.capitalize()
    return result

input_str = input()
print(camel_case(input_str))