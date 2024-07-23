def words_string(s):
    return [i.strip() for i in s.replace(",", " ").replace("|", " ").split()]