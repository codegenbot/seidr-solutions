```python
def camel_case(input_str):
    words = input_str.replace('-', ' ').split()
    result = ''
    for word in words:
        if not result:
            result = word.lower()
        else:
            result += word.capitalize()
    return result

print(camel_case("camel-case example-test-string"))
print(camel_case("nospaceordash"))
print(camel_case("two-words"))
print(camel_case("two words"))
print(camel_case("all separate words"))