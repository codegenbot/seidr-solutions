```python
def camel_case(input_str):
    words = input_str.split('-')
    output_str = ''
    for i, word in enumerate(words):
        if i > 0:
            output_str += word.capitalize()
        else:
            output_str += word
    return output_str