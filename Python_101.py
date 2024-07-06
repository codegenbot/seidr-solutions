```
def words_string(s):
    return s.strip().replace(" , ", ", ").split(", | ")