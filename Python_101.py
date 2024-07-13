```
def words_string(s):
    return [",".join(word.strip().title() for word in s.replace(",", " ").split())]