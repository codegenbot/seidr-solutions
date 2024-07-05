import re

def words_string(s):
    return [word for word in re.split(r"\s+", s) if word]