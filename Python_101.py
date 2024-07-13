```
def words_string(s):
    return [word.strip().title() for word in s.replace(",", " ").split() if word.strip()]