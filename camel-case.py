```python
def camel_case(input_str):
    result = ''
    words = input_str.replace('-', ' ').split()
    first_word = True
    for word in words:
        if not first_word:
            result += word.capitalize()
        else:
            result += word.lower()
            first_word = False
    return result