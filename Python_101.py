```
def words_string(words):
    return [word.strip().title().rstrip() for word in words if word]