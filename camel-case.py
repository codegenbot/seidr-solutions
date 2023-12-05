```
import re

def camel_case(string):
    return "".join([word.capitalize() for word in re.split("-", string)])
```