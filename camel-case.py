```python
def camel_case(input_str):
    input_str += ' '
    output_str = ''
    for word in input_str.split():
        if not output_str:
            output_str = word.capitalize()
        else:
            output_str += word.capitalize().swapcase()[0] + word[1:].lower()
    return output_str

print(camel_case("nospaceordash"))
print(camel_case("two-words"))
print(camel_case("two words"))
print(camel_case("all separate words"))