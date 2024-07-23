import re
def camel_case(s):
    return "".join(word.capitalize() if not i or prev_word.isupper() else " " + word for i, (word, prev_word) in enumerate((s.split("-")[0], *s.split("-")), 1) if i > 0)