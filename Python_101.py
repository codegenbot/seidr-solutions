```
def words_string(s):
    if not s:
        return []
    words = s.replace(", ", ",").split(",")
    return [word.strip().capitalize() for word in words if word.strip()]