def words_string(s):
    return [word for part in s.split(',') for word in part.split()]