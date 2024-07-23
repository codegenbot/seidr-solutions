import re

def camel_case(s):
    return "".join(
        word.capitalize() if i == 0 else word.capitalize()
        for i, word in enumerate(re.split('-| ', s))
    )