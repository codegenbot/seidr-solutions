def words_string(s):
    """return a list of capitalized words from the input string"""
    if not s:
        return []
    words = s.replace(", ", ",").split(",")
    return [word.strip().capitalize() for word in words]