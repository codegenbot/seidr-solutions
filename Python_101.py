
def words_string(s):
    return s.strip().split(", ")
    
assert words_string("ahmed, gamal") == ["ahmed", "gamal"]