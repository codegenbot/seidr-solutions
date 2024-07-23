import re
def camel_case(s):
    return s.split('-')[0] + "".join(word.capitalize() if i > 0 else word for i, word in enumerate(map(str.title, s.split('-')[1:]), 1))