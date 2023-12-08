```
import re
def camel_case(string):
words = re.split("-| ", string)
return "".join([word.title() for word in words])
```
