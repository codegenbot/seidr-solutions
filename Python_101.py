import re

def words_string():
    s = input("Enter a string: ")
    if s is None or not isinstance(s, str) or len(s.strip()) == 0:
        return []
    return [word.strip().capitalize() for word in re.split(r"\W+", s)]