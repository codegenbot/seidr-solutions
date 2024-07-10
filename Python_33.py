```Python
def sort_third(l):
    l.sort()
    return [x if i % 3 != 0 else (x if i % 3 == 1 else l.pop(0)) 
            for i, x in enumerate((i:=iter(l)))][::-1]