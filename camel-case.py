```
import re

def camel_case(string):
    words = re.split(r"-", string)
    return " ".join([word.capitalize() for word in words])
```
This code uses the `re` module to split the input string into individual words using a regular expression that matches the "-" character. It then uses a list comprehension to convert each word to camelCase by capitalizing the first letter and joining the converted words with an empty space..