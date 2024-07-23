import re
def camel_case(s):
    words = s.split(" ")
    return words[0] + "".join(word.capitalize() if i > 0 else word for i, word in enumerate(words[1:], 1))