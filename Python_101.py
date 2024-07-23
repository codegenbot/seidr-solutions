```
def words_string(s):
    s = s.lower()
    s = s.replace(",", " ")
    s = s.replace("|", "")
    return s.split()