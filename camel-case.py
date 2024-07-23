```
import re
def camel_case(s):
    words = s.split("-")
    return "".join(word.capitalize() if not i else word[0].upper() + word[1:] for i, word in enumerate(words, 1))