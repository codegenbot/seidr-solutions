````
def camel_case(input_str):
    result = input_str.split('-')[0].title()
    for word in input_str.replace("-", " ").split()[1:]:
        result += word.capitalize()
    return result
```