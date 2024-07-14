```python
def camel_case(input_str):
    words = input_str.replace('-', ' ').split()
    result = ''
    for i, word in enumerate(words):
        if i > 0:
            result += word.capitalize()
        else:
            result += word.lower()
    return result

print(camel_case("nospaceordash"))
print(camel_case("two-words"))
print(camel_case("two words"))
print(camel_case("all separate words"))