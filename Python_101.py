```
def words_string(s):
    s = " ".join(filter(None, s.replace(",", " ").split())).lower()
    return s.split()