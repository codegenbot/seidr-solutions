```
def words_string(s):
    return [' '.join(word.split()) for word in s.replace(",", " ").rsplit(" ", 1) if word]