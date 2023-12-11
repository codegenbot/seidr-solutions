import re
def camel_case(string):
    return re.sub(r'-(\w)', lambda m: m.group(1).upper(), string)