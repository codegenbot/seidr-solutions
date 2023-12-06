import re

def camel_case(string):
    words = re.findall(r"\w+", string)
    return "".join([word.title() for word in words])
```
This will match any sequence of one or more alphanumeric characters, including underscores.