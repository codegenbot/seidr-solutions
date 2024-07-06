import re


def words_string(s):
    s = re.sub(r"\s+", " ", s).strip()
    return s.split()