
def words_string(*s):
    return s.split(", ")

def check(func):
    assert func("ahmed, gamal") == ["ahmed", "gamal"]
    assert func("ahmed, gamal, mohamed") == ["ahmed", "gamal", "mohamed"]