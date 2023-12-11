```
def camel_case(string):
    words = string.split("-")
    return "".join([word[0].upper() + word[1:].lower() for word in words])
```