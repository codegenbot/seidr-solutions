def words_string(s):
    return [word.strip() for word in s.strip().replace(",","").replace(" | "," ").split()]