
```
import re

def camel_case(string):
    return ' '.join([word.title() for word in re.split('-', string)])
```