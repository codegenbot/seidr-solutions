def words_string(s):
    return s.split(',') + [i.strip() for i in s.replace(',', ' ').split()]