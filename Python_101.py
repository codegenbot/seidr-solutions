```
def words_string(s):
    return [word.split()[0].replace("\n", "").strip().rstrip() for word in s.replace("\n", "").split(",|")]