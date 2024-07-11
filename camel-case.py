```python
def camel_case(input_str):
    output = input_str.split("-")[0].lower()
    for word in input_str.replace("-", " ").split()[1:]:
        output += word.capitalize()
    return output