```python
def camel_case(input_str):
    if '-' in input_str:
        words = input_str.split('-')
        return ''.join(word.capitalize() for word in words) + ' '
    else:
        return input_str.capitalize()
input_str = input()
print(camel_case(input_str))