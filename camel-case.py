```python
def camel_case(input_str):
    output = input_str.split('-')[0].title()
    for word in input_str.split('-')[1:]:
        output += word.capitalize()
    return output```