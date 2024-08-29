```python
def camel_case(input_str):
    words = input_str.split('-')
    output_str = ''
    first_word = True
    for word in words:
        if not first_word:
            output_str += word.capitalize()
        else:
            output_str += word
            first_word = False
    print(output_str)