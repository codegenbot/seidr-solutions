```
def words_string(s):
    return [x.strip() for x in s.replace(", ", ",").split(",")]