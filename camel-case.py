```
def camel_case(string):
    words = re.split(r"[-\s]", string)
    return "".join([word.title() for word in words if word[0].isupper()])
```