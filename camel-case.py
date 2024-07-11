```python
def camel_case(input_str):
    result = ""
    for word in input_str.replace("-", " ").split():
        if not result or word == input_str:  
            result += word.capitalize()
        else:
            result += word.capitalize()
    return result