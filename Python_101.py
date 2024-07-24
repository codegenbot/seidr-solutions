def words_string(s):
    return [word.strip().replace("\n", "") for word in s.replace("\n", "").split(",|")]