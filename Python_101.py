```
def words_string(s):
    return [word.strip().replace("\n", "").split()[0] for word in s.replace("\n", "").split(",|")]