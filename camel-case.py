```
import re
def camel_case(s):
    return "".join(word.capitalize() for word in re.split('-| ', s)).lower().capitalize()