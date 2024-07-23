import re
def camel_case(s):
    words = re.split("-| ", s)
    return "".join(word.capitalize() if i > 0 else word for i, word in enumerate(words))