```python
def camel_case(input_str):
    result = input_str.split('-')[0].lower()
    for word in input_str.replace('-', ' ').split()[1:]:
        result += word[0].upper() + word[1:].lower()
    return result