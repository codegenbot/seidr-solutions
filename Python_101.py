def words_string(s):
    import re
    return re.split(r'[,\s]+', s.strip())