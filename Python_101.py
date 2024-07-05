
def words_string(s):
    return [word.strip() for word in re.split("\W+", s) if word]