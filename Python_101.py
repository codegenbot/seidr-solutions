```
def words_string(s):
    if type(s) != str:
        return "Error: Input must be a string"
    if s is None or not isinstance(s, str) or len(s.strip()) == 0:
        return []
    else:
        return [word.strip().capitalize() for word in re.split(r"\W+", s)]