```
import re

def camel_case(s):
    return re.sub(r"-(\w)", lambda x: x.group(1).capitalize(), s).lstrip('-')