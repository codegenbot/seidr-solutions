```python
def camel_case(input_str):
    words = input_str.replace('-', ' ').split()
    camel_case_str = ''
    for word in words:
        if len(camel_case_str) > 0:
            camel_case_str += word.capitalize()
        else:
            camel_case_str += word.lower()
    return camel_case_str

print(camel_case("nospaceordash"))
print(camel_case("two-words"))
print(camel_case("two words"))
print(camel_case("all separate words"))