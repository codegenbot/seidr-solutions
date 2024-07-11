```python
def camel_case(s):
    """"
    def camel_case(s):
        words = s.split("-")
        return words[0].lower() + "".join(word.capitalize() for word in words[1:]).replace("-", "")
    """"
    words = s.split("-")
    return words[0].lower() + "".join(word.capitalize() for word in words[1:]).replace("-", "")