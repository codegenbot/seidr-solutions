```python
def camel_case(input_str):
    output = input_str.split('-')[0].capitalize()
    for word in input_str.replace('-', ' ').split()[1:]:
        output += word.capitalize()
    return output

print(camel_case("nospaceordash"))
print(camel_case("two-words"))
print(camel_case("two words"))
print(camel_case("all separate words"))