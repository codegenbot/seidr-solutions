```
def words_string(s):
    return " ".join(filter(None, s.replace(",", " ").split(maxsplit=-1)))