```
def words_string(s):
    return [",".join(word.strip().title() for word in s.replace(",", " ").split()) for _ in s.split(",") if s]