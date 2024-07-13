def words_string(s):
    return [word.strip().title().rstrip() for word in s.replace(",", " ").split() if word]