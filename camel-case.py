```python
def camel_case(input_str):
    result = input_str.split('-')
    output = ''
    for word in result:
        if len(output) > 0:
            output += word.capitalize()
        else:
            output += word
    return output

print(camel_case("nospaceordash"))
print(camel_case("two-words"))
print(camel_case("two words"))
print(camel_case("all separate words"))