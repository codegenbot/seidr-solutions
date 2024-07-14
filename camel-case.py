```python
def camel_case(input_str):
    result = input_str.split('-')
    output = ''
    for word in result:
        if output:
            output += word.capitalize()
        else:
            output += word.lower()
    return output