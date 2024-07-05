def words_string(s):
    s = s.strip()
    return s.split(", ")


assert words_string("ahmed, gamal") == ["ahmed", "gamal"]