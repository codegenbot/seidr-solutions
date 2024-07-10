import re

def camel_case(s):
    return "".join(word.capitalize() for word in re.split('-{0,1}', s))