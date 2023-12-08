
import re
def camel_case(string):
    words = re.split(r"[^\w-]+", string)
    return "".join([word.title() for word in words])
```
Alternatively, you could use a different delimiter to separate the words in your input string. For example:
```
import re
def camel_case(string):
    words = re.split(r"[^\w-]+", string)
    return "".join([word.title() for word in words])
```
This will allow you to use the `^` symbol as a delimiter, which is not allowed in Python..