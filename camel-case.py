import re

def camel_case(string):
    words = re.split(r"[ -]+", string)
    return "".join([word.title() for word in words])