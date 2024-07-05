import re
def camel_case(s):
    return "".join(word.capitalize() for i,word in enumerate(re.split("[-\s]", s)) if i > 0)