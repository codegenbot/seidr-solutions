```python
def camel_case(input_str):
    words = input_str.replace('-', ' ').split()
    camel_case_str = ''
    for word in words:
        if not camel_case_str:
            camel_case_str = word.capitalize()
        else:
            camel_case_str += word.capitalize().swapcase()[0] + word[1:].lower()
    return camel_case_str

print(camel_case("camel-case example-test-string"))
print(camel_case("nospaceordash"))
print(camel_case("two-words"))
print(camel_case("two words"))
print(camel_case("all separate words"))