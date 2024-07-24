def words_string(s):
    s = s.replace("\n", "")  
    return [word.strip() for word in s.split(",| ")]