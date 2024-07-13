import re
def words_string(s):
    return [re.sub(r'^\W+|\W+$','',word).capitalize() for word in s.split()]