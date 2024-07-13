def words_string(s):
    return [word.strip().capitalize() for word in s.split(r'\W')]