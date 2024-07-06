import re
def words_string(s):
    s = re.sub(" +", " ", s)
    return s.split()