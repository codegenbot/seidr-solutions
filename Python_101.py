def words_string(s):
    import re
    return [word.strip() for word in re.split("\W+", s) if word]