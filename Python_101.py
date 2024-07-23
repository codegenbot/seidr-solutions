```
def words_string(s):
    return ",".join([word.strip() for word in s.split(",") if word])