```
def words_string(s):
    s = s.replace(",", " ")
    return [' '.join(filter(None, i.split())) for i in s.split()]