def words_string(s):
    s = s.replace(",", " ")
    return ' '.join(filter(None, s.split()))