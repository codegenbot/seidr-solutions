```python
def camel_case(s):
    return "".join(word.capitalize() if word.startswith("-") and word != "-" else word[0].upper() + word[1:].lower() for word in s.replace("-", " ").split())