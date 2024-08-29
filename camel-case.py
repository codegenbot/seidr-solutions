```python
def camel_case(input_str):
    output = input_str.split('-')
    result = ''
    for word in output:
        if len(result) > 0:
            result += word.capitalize()
        else:
            result += word
    return result

input_str = input()
print(camel_case(input_str))