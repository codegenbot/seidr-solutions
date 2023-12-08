```python
import re
def camel_case(string):
    words = re.split(r"\W+", string)
    return "".join([word.title() for word in words])
```