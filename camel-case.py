import re
def camel_case(s):
    return "".join(word.capitalize() if not i else " "+word for i, word in enumerate((s.replace("-", " ").capitalize())+(" "), 1) )