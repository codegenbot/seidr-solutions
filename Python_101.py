```
def words_string(s):
    if not s:
        return []
    words = s.split(",")
    return [word.strip().title() for word in words]