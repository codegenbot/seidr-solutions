```
import re

def camel_case(string):
    words = re.findall(r"[a-zA-Z]+", string)
    return "".join([word.title() for word in words])
```