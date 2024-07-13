```
def words_string(s):
    return [",".join(word.strip().title().split()) for word in s.split(",") if word]