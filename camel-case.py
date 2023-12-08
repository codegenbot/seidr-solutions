
Here's a possible solution to the problem:
```
def camel_case(string):
    words = string.split("-")
    return "".join([word.title() for word in words])
```