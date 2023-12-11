```
def camel_case(string):
    return "".join([word.title() for word in string.replace("-", "").split(" ")])
```