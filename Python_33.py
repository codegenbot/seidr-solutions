```
def sort_third(l: list):
    l_copy = [i for i in l]
    l.sort(key=lambda x: (x % 3, -x)) 
    return l