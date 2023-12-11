[PYTHON]
import re

def camel_case(string):
    return "".join([word[0].upper() + word[1:] for word in re.split("-| ", string)])
[/PYTHON]
