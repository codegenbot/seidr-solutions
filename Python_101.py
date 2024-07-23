```Python
def words_string(s):
    return [x.strip() for x in s.split() if x != ""]