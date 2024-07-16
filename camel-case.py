````
def camel_case(input_string):
    words = input_string.split('-')
    result = ''
    for i, word in enumerate(words):
        if i > 0:
            result += word.capitalize()
        else:
            result += word
    return result
```