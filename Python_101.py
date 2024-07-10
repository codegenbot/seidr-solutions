def words_string(s):
    return ", ".join(word.capitalize() for word in s.replace(",", " ").split())