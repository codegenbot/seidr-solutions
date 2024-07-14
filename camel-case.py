```python
def camel_case(input_str):
    input_str += ' '
    output_str = ''
    for char in input_str:
        if char.isalpha():
            if output_str and not output_str[-1].isalpha():
                output_str += char.capitalize()
            else:
                output_str += char.lower()
        elif char == '-':
            output_str += char.next().upper()
    return output_str.strip()