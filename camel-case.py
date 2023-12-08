
```
import re
def camel_case(string):
    words = re.split(r"[^\w-]+", string)
    return "".join([word.title() for word in words])
```

Alternatively, you can use the `re.sub` function to replace all occurrences of the `^` symbol with a space or a dash:
```
import re
def camel_case(string):
    words = re.split(r"[^\w-]+", string)
    return "".join([word.title() for word in words])
```