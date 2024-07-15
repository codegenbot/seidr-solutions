def words_string(s):
    return [word.strip() for word in s.split(",") if "," not in word]